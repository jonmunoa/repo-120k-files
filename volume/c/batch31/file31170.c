// fichero 31170 -- macros y constantes
#define LIMITE_31170 31270
#define FACTOR_31170 1

int aplicar_limite31170(int valor) {
    if (valor > LIMITE_31170) return LIMITE_31170;
    return valor * FACTOR_31170;
}
