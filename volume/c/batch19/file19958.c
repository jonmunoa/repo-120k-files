// fichero 19958 -- macros y constantes
#define LIMITE_19958 20058
#define FACTOR_19958 4

int aplicar_limite19958(int valor) {
    if (valor > LIMITE_19958) return LIMITE_19958;
    return valor * FACTOR_19958;
}
