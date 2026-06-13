// fichero 36462 -- macros y constantes
#define LIMITE_36462 36562
#define FACTOR_36462 3

int aplicar_limite36462(int valor) {
    if (valor > LIMITE_36462) return LIMITE_36462;
    return valor * FACTOR_36462;
}
