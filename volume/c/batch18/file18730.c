// fichero 18730 -- macros y constantes
#define LIMITE_18730 18830
#define FACTOR_18730 1

int aplicar_limite18730(int valor) {
    if (valor > LIMITE_18730) return LIMITE_18730;
    return valor * FACTOR_18730;
}
