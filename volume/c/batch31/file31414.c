// fichero 31414 -- macros y constantes
#define LIMITE_31414 31514
#define FACTOR_31414 5

int aplicar_limite31414(int valor) {
    if (valor > LIMITE_31414) return LIMITE_31414;
    return valor * FACTOR_31414;
}
