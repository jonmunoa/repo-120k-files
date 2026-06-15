// fichero 23522 -- macros y constantes -- MODIFICADO
#define LIMITE_23522 23722
#define FACTOR_23522 4

int aplicar_limite23522(int valor) {
    if (valor > LIMITE_23522) return LIMITE_23522;
    return valor * FACTOR_23522;
}
