// fichero 46462 -- macros y constantes
#define LIMITE_46462 46562
#define FACTOR_46462 3

int aplicar_limite46462(int valor) {
    if (valor > LIMITE_46462) return LIMITE_46462;
    return valor * FACTOR_46462;
}
