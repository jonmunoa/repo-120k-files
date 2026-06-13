// fichero 33118 -- macros y constantes
#define LIMITE_33118 33218
#define FACTOR_33118 4

int aplicar_limite33118(int valor) {
    if (valor > LIMITE_33118) return LIMITE_33118;
    return valor * FACTOR_33118;
}
