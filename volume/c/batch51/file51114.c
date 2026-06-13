// fichero 51114 -- macros y constantes
#define LIMITE_51114 51214
#define FACTOR_51114 5

int aplicar_limite51114(int valor) {
    if (valor > LIMITE_51114) return LIMITE_51114;
    return valor * FACTOR_51114;
}
