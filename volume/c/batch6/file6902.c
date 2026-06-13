// fichero 6902 -- macros y constantes
#define LIMITE_6902 7002
#define FACTOR_6902 3

int aplicar_limite6902(int valor) {
    if (valor > LIMITE_6902) return LIMITE_6902;
    return valor * FACTOR_6902;
}
