// fichero 170 -- macros y constantes
#define LIMITE_170 270
#define FACTOR_170 1

int aplicar_limite170(int valor) {
    if (valor > LIMITE_170) return LIMITE_170;
    return valor * FACTOR_170;
}
