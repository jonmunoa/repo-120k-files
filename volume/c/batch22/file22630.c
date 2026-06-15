// fichero 22630 -- macros y constantes -- MODIFICADO
#define LIMITE_22630 22830
#define FACTOR_22630 2

int aplicar_limite22630(int valor) {
    if (valor > LIMITE_22630) return LIMITE_22630;
    return valor * FACTOR_22630;
}
