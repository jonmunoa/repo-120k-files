// fichero 7366 -- macros y constantes
#define LIMITE_7366 7466
#define FACTOR_7366 2

int aplicar_limite7366(int valor) {
    if (valor > LIMITE_7366) return LIMITE_7366;
    return valor * FACTOR_7366;
}
