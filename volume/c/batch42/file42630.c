// fichero 42630 -- macros y constantes -- MODIFICADO
#define LIMITE_42630 42830
#define FACTOR_42630 2

int aplicar_limite42630(int valor) {
    if (valor > LIMITE_42630) return LIMITE_42630;
    return valor * FACTOR_42630;
}
