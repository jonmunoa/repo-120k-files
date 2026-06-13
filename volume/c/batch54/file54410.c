// fichero 54410 -- macros y constantes
#define LIMITE_54410 54510
#define FACTOR_54410 1

int aplicar_limite54410(int valor) {
    if (valor > LIMITE_54410) return LIMITE_54410;
    return valor * FACTOR_54410;
}
