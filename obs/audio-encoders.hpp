#include <obs.hpp>

#include <map>

const std::map<int, const char*> &GetAACEncoderBitrateMap();
const char *GetAACEncoderForBitrate(int bitrate);
