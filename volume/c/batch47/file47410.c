// fichero 47410 -- macros y constantes
#define LIMITE_47410 47510
#define FACTOR_47410 1

int aplicar_limite47410(int valor) {
    if (valor > LIMITE_47410) return LIMITE_47410;
    return valor * FACTOR_47410;
}
