// fichero 37158 -- macros y constantes
#define LIMITE_37158 37258
#define FACTOR_37158 4

int aplicar_limite37158(int valor) {
    if (valor > LIMITE_37158) return LIMITE_37158;
    return valor * FACTOR_37158;
}
