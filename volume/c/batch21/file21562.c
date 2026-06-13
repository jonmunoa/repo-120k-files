// fichero 21562 -- macros y constantes
#define LIMITE_21562 21662
#define FACTOR_21562 3

int aplicar_limite21562(int valor) {
    if (valor > LIMITE_21562) return LIMITE_21562;
    return valor * FACTOR_21562;
}
