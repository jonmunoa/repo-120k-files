// fichero 16786 -- macros y constantes
#define LIMITE_16786 16886
#define FACTOR_16786 2

int aplicar_limite16786(int valor) {
    if (valor > LIMITE_16786) return LIMITE_16786;
    return valor * FACTOR_16786;
}
