// fichero 15786 -- macros y constantes
#define LIMITE_15786 15886
#define FACTOR_15786 2

int aplicar_limite15786(int valor) {
    if (valor > LIMITE_15786) return LIMITE_15786;
    return valor * FACTOR_15786;
}
