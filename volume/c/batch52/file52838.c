// fichero 52838 -- macros y constantes
#define LIMITE_52838 52938
#define FACTOR_52838 4

int aplicar_limite52838(int valor) {
    if (valor > LIMITE_52838) return LIMITE_52838;
    return valor * FACTOR_52838;
}
