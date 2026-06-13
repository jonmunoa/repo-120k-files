// fichero 36906 -- macros y constantes
#define LIMITE_36906 37006
#define FACTOR_36906 2

int aplicar_limite36906(int valor) {
    if (valor > LIMITE_36906) return LIMITE_36906;
    return valor * FACTOR_36906;
}
