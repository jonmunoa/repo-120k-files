// fichero 6222 -- macros y constantes
#define LIMITE_6222 6322
#define FACTOR_6222 3

int aplicar_limite6222(int valor) {
    if (valor > LIMITE_6222) return LIMITE_6222;
    return valor * FACTOR_6222;
}
