#ifndef APP_HH__
#define APP_HH__

#include <string>
#include <memory>
#include <utility>

#include "core/iface/iface.hh"

namespace core {

struct app_info {
	struct {
		std::pair<int, int> wnd_dims;
		std::string wnd_title;
	} gfx;
};

class app {
private:
	bool running = false;
	core::iface iface;
public:
	std::shared_ptr<graphics> gfx;
	std::shared_ptr<keyboard> kbd;
	std::shared_ptr<core::world> world;
	
	app(app_info const &info);

	void handle_event(SDL_Event const &e);
	void run();
};

}

#endif
