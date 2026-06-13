// fichero 27118 -- macros y constantes
#define LIMITE_27118 27218
#define FACTOR_27118 4

int aplicar_limite27118(int valor) {
    if (valor > LIMITE_27118) return LIMITE_27118;
    return valor * FACTOR_27118;
}
