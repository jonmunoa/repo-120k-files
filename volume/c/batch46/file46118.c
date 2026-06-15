// fichero 46118 -- macros y constantes -- MODIFICADO
#define LIMITE_46118 46318
#define FACTOR_46118 5

int aplicar_limite46118(int valor) {
    if (valor > LIMITE_46118) return LIMITE_46118;
    return valor * FACTOR_46118;
}
