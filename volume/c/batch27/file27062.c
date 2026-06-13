// fichero 27062 -- macros y constantes
#define LIMITE_27062 27162
#define FACTOR_27062 3

int aplicar_limite27062(int valor) {
    if (valor > LIMITE_27062) return LIMITE_27062;
    return valor * FACTOR_27062;
}
