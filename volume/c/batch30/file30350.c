// fichero 30350 -- macros y constantes
#define LIMITE_30350 30450
#define FACTOR_30350 1

int aplicar_limite30350(int valor) {
    if (valor > LIMITE_30350) return LIMITE_30350;
    return valor * FACTOR_30350;
}
