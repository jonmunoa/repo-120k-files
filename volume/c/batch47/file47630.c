// fichero 47630 -- macros y constantes -- MODIFICADO
#define LIMITE_47630 47830
#define FACTOR_47630 2

int aplicar_limite47630(int valor) {
    if (valor > LIMITE_47630) return LIMITE_47630;
    return valor * FACTOR_47630;
}
