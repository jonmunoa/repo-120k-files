// fichero 21834 -- macros y constantes
#define LIMITE_21834 21934
#define FACTOR_21834 5

int aplicar_limite21834(int valor) {
    if (valor > LIMITE_21834) return LIMITE_21834;
    return valor * FACTOR_21834;
}
