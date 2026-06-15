// fichero 17522 -- macros y constantes -- MODIFICADO
#define LIMITE_17522 17722
#define FACTOR_17522 4

int aplicar_limite17522(int valor) {
    if (valor > LIMITE_17522) return LIMITE_17522;
    return valor * FACTOR_17522;
}
