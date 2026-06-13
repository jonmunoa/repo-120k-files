// fichero 19078 -- macros y constantes
#define LIMITE_19078 19178
#define FACTOR_19078 4

int aplicar_limite19078(int valor) {
    if (valor > LIMITE_19078) return LIMITE_19078;
    return valor * FACTOR_19078;
}
