// fichero 49906 -- macros y constantes
#define LIMITE_49906 50006
#define FACTOR_49906 2

int aplicar_limite49906(int valor) {
    if (valor > LIMITE_49906) return LIMITE_49906;
    return valor * FACTOR_49906;
}
