// fichero 40562 -- macros y constantes
#define LIMITE_40562 40662
#define FACTOR_40562 3

int aplicar_limite40562(int valor) {
    if (valor > LIMITE_40562) return LIMITE_40562;
    return valor * FACTOR_40562;
}
