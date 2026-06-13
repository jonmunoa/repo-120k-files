// fichero 35078 -- macros y constantes
#define LIMITE_35078 35178
#define FACTOR_35078 4

int aplicar_limite35078(int valor) {
    if (valor > LIMITE_35078) return LIMITE_35078;
    return valor * FACTOR_35078;
}
