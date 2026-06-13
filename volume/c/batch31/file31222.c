// fichero 31222 -- macros y constantes
#define LIMITE_31222 31322
#define FACTOR_31222 3

int aplicar_limite31222(int valor) {
    if (valor > LIMITE_31222) return LIMITE_31222;
    return valor * FACTOR_31222;
}
