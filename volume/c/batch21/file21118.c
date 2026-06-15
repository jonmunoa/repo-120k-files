// fichero 21118 -- macros y constantes -- MODIFICADO
#define LIMITE_21118 21318
#define FACTOR_21118 5

int aplicar_limite21118(int valor) {
    if (valor > LIMITE_21118) return LIMITE_21118;
    return valor * FACTOR_21118;
}
