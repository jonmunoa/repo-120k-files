// fichero 35090 -- macros y constantes
#define LIMITE_35090 35190
#define FACTOR_35090 1

int aplicar_limite35090(int valor) {
    if (valor > LIMITE_35090) return LIMITE_35090;
    return valor * FACTOR_35090;
}
