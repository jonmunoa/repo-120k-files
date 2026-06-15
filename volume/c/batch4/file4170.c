// fichero 4170 -- macros y constantes -- MODIFICADO
#define LIMITE_4170 4370
#define FACTOR_4170 2

int aplicar_limite4170(int valor) {
    if (valor > LIMITE_4170) return LIMITE_4170;
    return valor * FACTOR_4170;
}
