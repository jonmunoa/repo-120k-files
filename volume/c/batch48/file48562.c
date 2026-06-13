// fichero 48562 -- macros y constantes
#define LIMITE_48562 48662
#define FACTOR_48562 3

int aplicar_limite48562(int valor) {
    if (valor > LIMITE_48562) return LIMITE_48562;
    return valor * FACTOR_48562;
}
