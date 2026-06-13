// fichero 46118 -- macros y constantes
#define LIMITE_46118 46218
#define FACTOR_46118 4

int aplicar_limite46118(int valor) {
    if (valor > LIMITE_46118) return LIMITE_46118;
    return valor * FACTOR_46118;
}
