// fichero 18630 -- macros y constantes -- MODIFICADO
#define LIMITE_18630 18830
#define FACTOR_18630 2

int aplicar_limite18630(int valor) {
    if (valor > LIMITE_18630) return LIMITE_18630;
    return valor * FACTOR_18630;
}
