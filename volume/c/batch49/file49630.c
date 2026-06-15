// fichero 49630 -- macros y constantes -- MODIFICADO
#define LIMITE_49630 49830
#define FACTOR_49630 2

int aplicar_limite49630(int valor) {
    if (valor > LIMITE_49630) return LIMITE_49630;
    return valor * FACTOR_49630;
}
