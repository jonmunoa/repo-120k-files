// fichero 4410 -- macros y constantes
#define LIMITE_4410 4510
#define FACTOR_4410 1

int aplicar_limite4410(int valor) {
    if (valor > LIMITE_4410) return LIMITE_4410;
    return valor * FACTOR_4410;
}
