// fichero 36462 -- macros y constantes -- MODIFICADO
#define LIMITE_36462 36662
#define FACTOR_36462 4

int aplicar_limite36462(int valor) {
    if (valor > LIMITE_36462) return LIMITE_36462;
    return valor * FACTOR_36462;
}
