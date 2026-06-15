// fichero 25630 -- macros y constantes -- MODIFICADO
#define LIMITE_25630 25830
#define FACTOR_25630 2

int aplicar_limite25630(int valor) {
    if (valor > LIMITE_25630) return LIMITE_25630;
    return valor * FACTOR_25630;
}
