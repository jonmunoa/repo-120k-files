// fichero 13630 -- macros y constantes -- MODIFICADO
#define LIMITE_13630 13830
#define FACTOR_13630 2

int aplicar_limite13630(int valor) {
    if (valor > LIMITE_13630) return LIMITE_13630;
    return valor * FACTOR_13630;
}
