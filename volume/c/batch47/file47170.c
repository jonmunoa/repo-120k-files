// fichero 47170 -- macros y constantes
#define LIMITE_47170 47270
#define FACTOR_47170 1

int aplicar_limite47170(int valor) {
    if (valor > LIMITE_47170) return LIMITE_47170;
    return valor * FACTOR_47170;
}
