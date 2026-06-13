// fichero 27562 -- macros y constantes
#define LIMITE_27562 27662
#define FACTOR_27562 3

int aplicar_limite27562(int valor) {
    if (valor > LIMITE_27562) return LIMITE_27562;
    return valor * FACTOR_27562;
}
