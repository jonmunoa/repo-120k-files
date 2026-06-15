// fichero 23346 -- macros y constantes -- MODIFICADO
#define LIMITE_23346 23546
#define FACTOR_23346 3

int aplicar_limite23346(int valor) {
    if (valor > LIMITE_23346) return LIMITE_23346;
    return valor * FACTOR_23346;
}
