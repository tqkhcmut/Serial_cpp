#pragma once

namespace Serial
{ 
	enum Parity
	{

	};
	struct SerialProperty
	{
		string _pname;
		uint32_t _baudr;
	};
	class SerialPort
	{
	public:
		SerialPort();
		~SerialPort();
		void begin(uint32_t baudrate = 9600, string portname = "COM1");

		int write(uint8_t * buffer, int len);
		int read(uint8_t * buffer, int len);
	protected:
	private:
	};
}

