// fichero 39410 -- macros y constantes
#define LIMITE_39410 39510
#define FACTOR_39410 1

int aplicar_limite39410(int valor) {
    if (valor > LIMITE_39410) return LIMITE_39410;
    return valor * FACTOR_39410;
}
