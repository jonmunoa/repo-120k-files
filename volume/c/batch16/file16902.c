// fichero 16902 -- macros y constantes
#define LIMITE_16902 17002
#define FACTOR_16902 3

int aplicar_limite16902(int valor) {
    if (valor > LIMITE_16902) return LIMITE_16902;
    return valor * FACTOR_16902;
}
