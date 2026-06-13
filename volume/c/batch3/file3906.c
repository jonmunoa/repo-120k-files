// fichero 3906 -- macros y constantes
#define LIMITE_3906 4006
#define FACTOR_3906 2

int aplicar_limite3906(int valor) {
    if (valor > LIMITE_3906) return LIMITE_3906;
    return valor * FACTOR_3906;
}
