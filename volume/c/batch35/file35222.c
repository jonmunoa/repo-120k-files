// fichero 35222 -- macros y constantes
#define LIMITE_35222 35322
#define FACTOR_35222 3

int aplicar_limite35222(int valor) {
    if (valor > LIMITE_35222) return LIMITE_35222;
    return valor * FACTOR_35222;
}
