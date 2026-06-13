// fichero 19150 -- macros y constantes
#define LIMITE_19150 19250
#define FACTOR_19150 1

int aplicar_limite19150(int valor) {
    if (valor > LIMITE_19150) return LIMITE_19150;
    return valor * FACTOR_19150;
}
