// fichero 46562 -- macros y constantes
#define LIMITE_46562 46662
#define FACTOR_46562 3

int aplicar_limite46562(int valor) {
    if (valor > LIMITE_46562) return LIMITE_46562;
    return valor * FACTOR_46562;
}
