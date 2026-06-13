// fichero 28170 -- macros y constantes
#define LIMITE_28170 28270
#define FACTOR_28170 1

int aplicar_limite28170(int valor) {
    if (valor > LIMITE_28170) return LIMITE_28170;
    return valor * FACTOR_28170;
}
