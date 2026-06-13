// fichero 43170 -- macros y constantes
#define LIMITE_43170 43270
#define FACTOR_43170 1

int aplicar_limite43170(int valor) {
    if (valor > LIMITE_43170) return LIMITE_43170;
    return valor * FACTOR_43170;
}
