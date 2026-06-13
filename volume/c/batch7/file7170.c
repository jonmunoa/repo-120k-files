// fichero 7170 -- macros y constantes
#define LIMITE_7170 7270
#define FACTOR_7170 1

int aplicar_limite7170(int valor) {
    if (valor > LIMITE_7170) return LIMITE_7170;
    return valor * FACTOR_7170;
}
