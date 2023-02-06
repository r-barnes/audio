#include <torch/extension.h>
#include <torchaudio/csrc/sox/utils.h>

namespace torchaudio {
namespace sox {
namespace {

PYBIND11_MODULE(_torchaudio_sox, m) {
  m.def(
      "set_seed",
      &torchaudio::sox_utils::set_seed,
      "Set random seed.");
  m.def(
      "set_verbosity",
      &torchaudio::sox_utils::set_verbosity,
      "Set verbosity.");
  m.def(
      "set_use_threads",
      &torchaudio::sox_utils::set_use_threads,
      "Set threading.");
  m.def(
      "set_buffer_size",
      &torchaudio::sox_utils::set_buffer_size,
      "Set buffer size.");
  m.def(
      "get_buffer_size",
      &torchaudio::sox_utils::get_buffer_size,
      "Get buffer size.");
  m.def(
      "list_effects",
      &torchaudio::sox_utils::list_effects,
      "List available effects.");
  m.def(
      "list_read_formats",
      &torchaudio::sox_utils::list_read_formats,
      "List supported formats for decoding.");
  m.def(
      "list_write_formats",
      &torchaudio::sox_utils::list_write_formats,
      "List supported formats for encoding.");
}

} // torchaudio
} // sox
} // namespace
