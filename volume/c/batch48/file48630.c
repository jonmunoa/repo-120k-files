// fichero 48630 -- macros y constantes -- MODIFICADO
#define LIMITE_48630 48830
#define FACTOR_48630 2

int aplicar_limite48630(int valor) {
    if (valor > LIMITE_48630) return LIMITE_48630;
    return valor * FACTOR_48630;
}
