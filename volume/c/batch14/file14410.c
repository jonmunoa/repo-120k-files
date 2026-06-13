// fichero 14410 -- macros y constantes
#define LIMITE_14410 14510
#define FACTOR_14410 1

int aplicar_limite14410(int valor) {
    if (valor > LIMITE_14410) return LIMITE_14410;
    return valor * FACTOR_14410;
}
