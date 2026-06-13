// fichero 41786 -- macros y constantes
#define LIMITE_41786 41886
#define FACTOR_41786 2

int aplicar_limite41786(int valor) {
    if (valor > LIMITE_41786) return LIMITE_41786;
    return valor * FACTOR_41786;
}
