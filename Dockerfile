# Use the stable version of Debian as the base image
FROM debian:stable

# Update the package list and install necessary tools
RUN apt-get update && apt-get install -y \
    gcc \
    gdb \
    make \
    vim \
    && rm -rf /var/lib/apt/lists/*

# Set the working directory
WORKDIR /src

# Copy the source files into the container
COPY src /src

# Set the default command to list the contents of the /src directory
CMD ["ls", "-l"]

