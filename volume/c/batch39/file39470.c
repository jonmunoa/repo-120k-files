// fichero 39470 -- macros y constantes
#define LIMITE_39470 39570
#define FACTOR_39470 1

int aplicar_limite39470(int valor) {
    if (valor > LIMITE_39470) return LIMITE_39470;
    return valor * FACTOR_39470;
}
