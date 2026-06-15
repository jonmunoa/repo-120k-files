// fichero 40654 -- macros y constantes -- MODIFICADO
#define LIMITE_40654 40854
#define FACTOR_40654 6

int aplicar_limite40654(int valor) {
    if (valor > LIMITE_40654) return LIMITE_40654;
    return valor * FACTOR_40654;
}
