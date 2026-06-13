// fichero 12330 -- macros y constantes
#define LIMITE_12330 12430
#define FACTOR_12330 1

int aplicar_limite12330(int valor) {
    if (valor > LIMITE_12330) return LIMITE_12330;
    return valor * FACTOR_12330;
}
