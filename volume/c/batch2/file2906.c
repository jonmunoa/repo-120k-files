// fichero 2906 -- macros y constantes
#define LIMITE_2906 3006
#define FACTOR_2906 2

int aplicar_limite2906(int valor) {
    if (valor > LIMITE_2906) return LIMITE_2906;
    return valor * FACTOR_2906;
}
