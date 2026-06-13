// fichero 23622 -- macros y constantes
#define LIMITE_23622 23722
#define FACTOR_23622 3

int aplicar_limite23622(int valor) {
    if (valor > LIMITE_23622) return LIMITE_23622;
    return valor * FACTOR_23622;
}
