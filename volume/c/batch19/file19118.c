// fichero 19118 -- macros y constantes -- MODIFICADO
#define LIMITE_19118 19318
#define FACTOR_19118 5

int aplicar_limite19118(int valor) {
    if (valor > LIMITE_19118) return LIMITE_19118;
    return valor * FACTOR_19118;
}
