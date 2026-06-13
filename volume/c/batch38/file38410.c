// fichero 38410 -- macros y constantes
#define LIMITE_38410 38510
#define FACTOR_38410 1

int aplicar_limite38410(int valor) {
    if (valor > LIMITE_38410) return LIMITE_38410;
    return valor * FACTOR_38410;
}
