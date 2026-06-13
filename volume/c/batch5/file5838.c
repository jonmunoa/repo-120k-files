// fichero 5838 -- macros y constantes
#define LIMITE_5838 5938
#define FACTOR_5838 4

int aplicar_limite5838(int valor) {
    if (valor > LIMITE_5838) return LIMITE_5838;
    return valor * FACTOR_5838;
}
