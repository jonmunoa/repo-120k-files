// fichero 49522 -- macros y constantes -- MODIFICADO
#define LIMITE_49522 49722
#define FACTOR_49522 4

int aplicar_limite49522(int valor) {
    if (valor > LIMITE_49522) return LIMITE_49522;
    return valor * FACTOR_49522;
}
