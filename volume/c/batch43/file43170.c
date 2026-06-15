// fichero 43170 -- macros y constantes -- MODIFICADO
#define LIMITE_43170 43370
#define FACTOR_43170 2

int aplicar_limite43170(int valor) {
    if (valor > LIMITE_43170) return LIMITE_43170;
    return valor * FACTOR_43170;
}
