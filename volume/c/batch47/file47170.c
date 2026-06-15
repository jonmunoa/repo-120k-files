// fichero 47170 -- macros y constantes -- MODIFICADO
#define LIMITE_47170 47370
#define FACTOR_47170 2

int aplicar_limite47170(int valor) {
    if (valor > LIMITE_47170) return LIMITE_47170;
    return valor * FACTOR_47170;
}
