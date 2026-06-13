// fichero 19126 -- macros y constantes
#define LIMITE_19126 19226
#define FACTOR_19126 2

int aplicar_limite19126(int valor) {
    if (valor > LIMITE_19126) return LIMITE_19126;
    return valor * FACTOR_19126;
}
