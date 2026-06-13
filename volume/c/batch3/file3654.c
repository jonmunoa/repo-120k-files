// fichero 3654 -- macros y constantes
#define LIMITE_3654 3754
#define FACTOR_3654 5

int aplicar_limite3654(int valor) {
    if (valor > LIMITE_3654) return LIMITE_3654;
    return valor * FACTOR_3654;
}
