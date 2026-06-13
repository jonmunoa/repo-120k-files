// fichero 15706 -- macros y constantes
#define LIMITE_15706 15806
#define FACTOR_15706 2

int aplicar_limite15706(int valor) {
    if (valor > LIMITE_15706) return LIMITE_15706;
    return valor * FACTOR_15706;
}
