//
// server_base.hpp
//
#include <boost/asio.hpp>

#include <regex>
#include <unordered_map>
#include <thread>

namespace WebServer{
	//socket_type is http or https
	template <typename socket_type>

	class ServerBase
	{
	public:
		// start server
		void start();
	protected:
		// need defferent kinds server to bulid this function
		virtual void accept(){}
		//deal with request and respond
		void process_request_and_respond(std::shared_ptr<socket_type>) const;
		
	};

	template <typename socket_type>
	class Server : public ServerBase<socket_type> {};

}