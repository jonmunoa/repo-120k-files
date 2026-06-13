// fichero 8170 -- macros y constantes
#define LIMITE_8170 8270
#define FACTOR_8170 1

int aplicar_limite8170(int valor) {
    if (valor > LIMITE_8170) return LIMITE_8170;
    return valor * FACTOR_8170;
}
