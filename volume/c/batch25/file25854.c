// fichero 25854 -- macros y constantes
#define LIMITE_25854 25954
#define FACTOR_25854 5

int aplicar_limite25854(int valor) {
    if (valor > LIMITE_25854) return LIMITE_25854;
    return valor * FACTOR_25854;
}
