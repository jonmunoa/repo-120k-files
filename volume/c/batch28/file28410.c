// fichero 28410 -- macros y constantes
#define LIMITE_28410 28510
#define FACTOR_28410 1

int aplicar_limite28410(int valor) {
    if (valor > LIMITE_28410) return LIMITE_28410;
    return valor * FACTOR_28410;
}
