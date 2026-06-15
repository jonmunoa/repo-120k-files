// fichero 8170 -- macros y constantes -- MODIFICADO
#define LIMITE_8170 8370
#define FACTOR_8170 2

int aplicar_limite8170(int valor) {
    if (valor > LIMITE_8170) return LIMITE_8170;
    return valor * FACTOR_8170;
}
