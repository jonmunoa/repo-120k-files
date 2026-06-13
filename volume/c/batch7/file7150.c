// fichero 7150 -- macros y constantes
#define LIMITE_7150 7250
#define FACTOR_7150 1

int aplicar_limite7150(int valor) {
    if (valor > LIMITE_7150) return LIMITE_7150;
    return valor * FACTOR_7150;
}
