// fichero 30170 -- macros y constantes -- MODIFICADO
#define LIMITE_30170 30370
#define FACTOR_30170 2

int aplicar_limite30170(int valor) {
    if (valor > LIMITE_30170) return LIMITE_30170;
    return valor * FACTOR_30170;
}
