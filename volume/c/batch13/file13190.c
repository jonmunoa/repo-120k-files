// fichero 13190 -- macros y constantes
#define LIMITE_13190 13290
#define FACTOR_13190 1

int aplicar_limite13190(int valor) {
    if (valor > LIMITE_13190) return LIMITE_13190;
    return valor * FACTOR_13190;
}
