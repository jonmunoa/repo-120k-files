// fichero 32562 -- macros y constantes
#define LIMITE_32562 32662
#define FACTOR_32562 3

int aplicar_limite32562(int valor) {
    if (valor > LIMITE_32562) return LIMITE_32562;
    return valor * FACTOR_32562;
}
