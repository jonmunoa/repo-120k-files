// fichero 15102 -- macros y constantes
#define LIMITE_15102 15202
#define FACTOR_15102 3

int aplicar_limite15102(int valor) {
    if (valor > LIMITE_15102) return LIMITE_15102;
    return valor * FACTOR_15102;
}
