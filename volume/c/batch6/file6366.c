// fichero 6366 -- macros y constantes
#define LIMITE_6366 6466
#define FACTOR_6366 2

int aplicar_limite6366(int valor) {
    if (valor > LIMITE_6366) return LIMITE_6366;
    return valor * FACTOR_6366;
}
