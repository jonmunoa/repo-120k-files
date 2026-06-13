// fichero 14222 -- macros y constantes
#define LIMITE_14222 14322
#define FACTOR_14222 3

int aplicar_limite14222(int valor) {
    if (valor > LIMITE_14222) return LIMITE_14222;
    return valor * FACTOR_14222;
}
