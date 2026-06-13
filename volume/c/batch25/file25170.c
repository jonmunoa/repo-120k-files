// fichero 25170 -- macros y constantes
#define LIMITE_25170 25270
#define FACTOR_25170 1

int aplicar_limite25170(int valor) {
    if (valor > LIMITE_25170) return LIMITE_25170;
    return valor * FACTOR_25170;
}
