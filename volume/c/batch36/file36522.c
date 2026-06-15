// fichero 36522 -- macros y constantes -- MODIFICADO
#define LIMITE_36522 36722
#define FACTOR_36522 4

int aplicar_limite36522(int valor) {
    if (valor > LIMITE_36522) return LIMITE_36522;
    return valor * FACTOR_36522;
}
