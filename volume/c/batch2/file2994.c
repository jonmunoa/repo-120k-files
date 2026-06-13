// fichero 2994 -- macros y constantes
#define LIMITE_2994 3094
#define FACTOR_2994 5

int aplicar_limite2994(int valor) {
    if (valor > LIMITE_2994) return LIMITE_2994;
    return valor * FACTOR_2994;
}
