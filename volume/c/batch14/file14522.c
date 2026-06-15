// fichero 14522 -- macros y constantes -- MODIFICADO
#define LIMITE_14522 14722
#define FACTOR_14522 4

int aplicar_limite14522(int valor) {
    if (valor > LIMITE_14522) return LIMITE_14522;
    return valor * FACTOR_14522;
}
