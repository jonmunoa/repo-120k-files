// fichero 21410 -- macros y constantes
#define LIMITE_21410 21510
#define FACTOR_21410 1

int aplicar_limite21410(int valor) {
    if (valor > LIMITE_21410) return LIMITE_21410;
    return valor * FACTOR_21410;
}
