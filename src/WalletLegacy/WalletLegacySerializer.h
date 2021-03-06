// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2014-2017 XDN-project developers
////////////////////////////////////////////////////////////////////////////////
#pragma once

#include <vector>
#include <ostream>
#include <istream>
//#include <iostream>

#include "crypto/hash.h"
#include "crypto/chacha.h"
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
namespace CryptoNote {
	class AccountBase;
	class ISerializer;
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
namespace CryptoNote {

class WalletUserTransactionsCache;

class WalletLegacySerializer {
public:
  WalletLegacySerializer(CryptoNote::AccountBase& account, WalletUserTransactionsCache& transactionsCache);

  void serialize(std::ostream& stream, const std::string& password, bool saveDetailed, const std::string& cache);
  void deserialize(std::istream& stream, const std::string& password, std::string& cache);

private:
  void saveKeys(CryptoNote::ISerializer& serializer);
  void loadKeys(CryptoNote::ISerializer& serializer);

  Crypto::chacha_iv encrypt(const std::string& plain, const std::string& password, std::string& cipher);
  void decrypt(const std::string& cipher, std::string& plain, Crypto::chacha_iv iv, const std::string& password);

  CryptoNote::AccountBase& account;
  WalletUserTransactionsCache& transactionsCache;
  const uint32_t walletSerializationVersion;
};
////////////////////////////////////////////////////////////////////////////////
} //namespace CryptoNote
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
