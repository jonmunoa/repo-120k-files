// fichero 40654 -- macros y constantes
#define LIMITE_40654 40754
#define FACTOR_40654 5

int aplicar_limite40654(int valor) {
    if (valor > LIMITE_40654) return LIMITE_40654;
    return valor * FACTOR_40654;
}
