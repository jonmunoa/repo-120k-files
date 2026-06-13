// fichero 4466 -- macros y constantes
#define LIMITE_4466 4566
#define FACTOR_4466 2

int aplicar_limite4466(int valor) {
    if (valor > LIMITE_4466) return LIMITE_4466;
    return valor * FACTOR_4466;
}
