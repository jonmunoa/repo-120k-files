// fichero 52194 -- macros y constantes
#define LIMITE_52194 52294
#define FACTOR_52194 5

int aplicar_limite52194(int valor) {
    if (valor > LIMITE_52194) return LIMITE_52194;
    return valor * FACTOR_52194;
}
