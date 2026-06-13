// fichero 6786 -- macros y constantes
#define LIMITE_6786 6886
#define FACTOR_6786 2

int aplicar_limite6786(int valor) {
    if (valor > LIMITE_6786) return LIMITE_6786;
    return valor * FACTOR_6786;
}
