// fichero 12410 -- macros y constantes
#define LIMITE_12410 12510
#define FACTOR_12410 1

int aplicar_limite12410(int valor) {
    if (valor > LIMITE_12410) return LIMITE_12410;
    return valor * FACTOR_12410;
}
