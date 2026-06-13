// fichero 3562 -- macros y constantes
#define LIMITE_3562 3662
#define FACTOR_3562 3

int aplicar_limite3562(int valor) {
    if (valor > LIMITE_3562) return LIMITE_3562;
    return valor * FACTOR_3562;
}
