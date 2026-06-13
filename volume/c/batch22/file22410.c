// fichero 22410 -- macros y constantes
#define LIMITE_22410 22510
#define FACTOR_22410 1

int aplicar_limite22410(int valor) {
    if (valor > LIMITE_22410) return LIMITE_22410;
    return valor * FACTOR_22410;
}
