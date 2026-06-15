// fichero 10 -- macros y constantes -- MODIFICADO
#define LIMITE_10 210
#define FACTOR_10 2

int aplicar_limite10(int valor) {
    if (valor > LIMITE_10) return LIMITE_10;
    return valor * FACTOR_10;
}
