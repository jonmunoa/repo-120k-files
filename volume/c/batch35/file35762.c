// fichero 35762 -- macros y constantes
#define LIMITE_35762 35862
#define FACTOR_35762 3

int aplicar_limite35762(int valor) {
    if (valor > LIMITE_35762) return LIMITE_35762;
    return valor * FACTOR_35762;
}
