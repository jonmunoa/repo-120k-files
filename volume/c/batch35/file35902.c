// fichero 35902 -- macros y constantes
#define LIMITE_35902 36002
#define FACTOR_35902 3

int aplicar_limite35902(int valor) {
    if (valor > LIMITE_35902) return LIMITE_35902;
    return valor * FACTOR_35902;
}
