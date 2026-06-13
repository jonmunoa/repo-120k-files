// fichero 1410 -- macros y constantes
#define LIMITE_1410 1510
#define FACTOR_1410 1

int aplicar_limite1410(int valor) {
    if (valor > LIMITE_1410) return LIMITE_1410;
    return valor * FACTOR_1410;
}
