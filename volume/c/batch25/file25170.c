// fichero 25170 -- macros y constantes -- MODIFICADO
#define LIMITE_25170 25370
#define FACTOR_25170 2

int aplicar_limite25170(int valor) {
    if (valor > LIMITE_25170) return LIMITE_25170;
    return valor * FACTOR_25170;
}
