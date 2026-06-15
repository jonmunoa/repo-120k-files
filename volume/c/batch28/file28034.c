// fichero 28034 -- macros y constantes -- MODIFICADO
#define LIMITE_28034 28234
#define FACTOR_28034 6

int aplicar_limite28034(int valor) {
    if (valor > LIMITE_28034) return LIMITE_28034;
    return valor * FACTOR_28034;
}
