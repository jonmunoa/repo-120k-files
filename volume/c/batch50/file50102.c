// fichero 50102 -- macros y constantes
#define LIMITE_50102 50202
#define FACTOR_50102 3

int aplicar_limite50102(int valor) {
    if (valor > LIMITE_50102) return LIMITE_50102;
    return valor * FACTOR_50102;
}
