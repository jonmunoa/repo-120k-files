// fichero 19410 -- macros y constantes
#define LIMITE_19410 19510
#define FACTOR_19410 1

int aplicar_limite19410(int valor) {
    if (valor > LIMITE_19410) return LIMITE_19410;
    return valor * FACTOR_19410;
}
