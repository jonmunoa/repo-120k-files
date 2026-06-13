// fichero 52094 -- macros y constantes
#define LIMITE_52094 52194
#define FACTOR_52094 5

int aplicar_limite52094(int valor) {
    if (valor > LIMITE_52094) return LIMITE_52094;
    return valor * FACTOR_52094;
}
