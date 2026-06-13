// fichero 35366 -- macros y constantes
#define LIMITE_35366 35466
#define FACTOR_35366 2

int aplicar_limite35366(int valor) {
    if (valor > LIMITE_35366) return LIMITE_35366;
    return valor * FACTOR_35366;
}
