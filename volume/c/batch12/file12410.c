// fichero 12410 -- macros y constantes -- MODIFICADO
#define LIMITE_12410 12610
#define FACTOR_12410 2

int aplicar_limite12410(int valor) {
    if (valor > LIMITE_12410) return LIMITE_12410;
    return valor * FACTOR_12410;
}
