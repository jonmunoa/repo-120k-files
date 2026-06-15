// fichero 3118 -- macros y constantes -- MODIFICADO
#define LIMITE_3118 3318
#define FACTOR_3118 5

int aplicar_limite3118(int valor) {
    if (valor > LIMITE_3118) return LIMITE_3118;
    return valor * FACTOR_3118;
}
