// fichero 7838 -- macros y constantes
#define LIMITE_7838 7938
#define FACTOR_7838 4

int aplicar_limite7838(int valor) {
    if (valor > LIMITE_7838) return LIMITE_7838;
    return valor * FACTOR_7838;
}
