// fichero 34990 -- macros y constantes
#define LIMITE_34990 35090
#define FACTOR_34990 1

int aplicar_limite34990(int valor) {
    if (valor > LIMITE_34990) return LIMITE_34990;
    return valor * FACTOR_34990;
}
