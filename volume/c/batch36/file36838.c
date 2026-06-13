// fichero 36838 -- macros y constantes
#define LIMITE_36838 36938
#define FACTOR_36838 4

int aplicar_limite36838(int valor) {
    if (valor > LIMITE_36838) return LIMITE_36838;
    return valor * FACTOR_36838;
}
