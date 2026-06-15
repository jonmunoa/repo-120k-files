// fichero 11522 -- macros y constantes -- MODIFICADO
#define LIMITE_11522 11722
#define FACTOR_11522 4

int aplicar_limite11522(int valor) {
    if (valor > LIMITE_11522) return LIMITE_11522;
    return valor * FACTOR_11522;
}
