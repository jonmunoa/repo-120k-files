// fichero 7222 -- macros y constantes
#define LIMITE_7222 7322
#define FACTOR_7222 3

int aplicar_limite7222(int valor) {
    if (valor > LIMITE_7222) return LIMITE_7222;
    return valor * FACTOR_7222;
}
