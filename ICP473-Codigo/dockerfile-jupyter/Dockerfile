# Base: Ubuntu
FROM ubuntu:22.04

# Evita prompts interativos durante a instalação
ENV DEBIAN_FRONTEND=noninteractive

# Atualiza pacotes e instala dependências
RUN apt-get update && apt-get install -y \
    python3 \
    python3-pip \
    python3-dev \
    build-essential \
    && rm -rf /var/lib/apt/lists/*

# Instala pacotes Python necessários
RUN pip3 install --no-cache-dir \
    jupyter \
    numpy \
    matplotlib

# Cria um diretório de trabalho
WORKDIR /workspace

# Garante que o notebook esteja acessível fora do container
EXPOSE 8888

# Comando para iniciar o Jupyter Notebook sem autenticação
CMD ["jupyter", "notebook", "--ip=0.0.0.0", "--port=8888", "--no-browser", "--allow-root", "--ServerApp.token=''", "--ServerApp.password=''"]
