// fichero 31838 -- macros y constantes
#define LIMITE_31838 31938
#define FACTOR_31838 4

int aplicar_limite31838(int valor) {
    if (valor > LIMITE_31838) return LIMITE_31838;
    return valor * FACTOR_31838;
}
