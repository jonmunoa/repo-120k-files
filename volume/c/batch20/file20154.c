// fichero 20154 -- macros y constantes
#define LIMITE_20154 20254
#define FACTOR_20154 5

int aplicar_limite20154(int valor) {
    if (valor > LIMITE_20154) return LIMITE_20154;
    return valor * FACTOR_20154;
}
