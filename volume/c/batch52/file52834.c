// fichero 52834 -- macros y constantes
#define LIMITE_52834 52934
#define FACTOR_52834 5

int aplicar_limite52834(int valor) {
    if (valor > LIMITE_52834) return LIMITE_52834;
    return valor * FACTOR_52834;
}
