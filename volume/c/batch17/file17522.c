// fichero 17522 -- macros y constantes
#define LIMITE_17522 17622
#define FACTOR_17522 3

int aplicar_limite17522(int valor) {
    if (valor > LIMITE_17522) return LIMITE_17522;
    return valor * FACTOR_17522;
}
