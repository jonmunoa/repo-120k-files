// fichero 3014 -- macros y constantes
#define LIMITE_3014 3114
#define FACTOR_3014 5

int aplicar_limite3014(int valor) {
    if (valor > LIMITE_3014) return LIMITE_3014;
    return valor * FACTOR_3014;
}
