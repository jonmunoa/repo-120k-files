// fichero 19126 -- macros y constantes -- MODIFICADO
#define LIMITE_19126 19326
#define FACTOR_19126 3

int aplicar_limite19126(int valor) {
    if (valor > LIMITE_19126) return LIMITE_19126;
    return valor * FACTOR_19126;
}
