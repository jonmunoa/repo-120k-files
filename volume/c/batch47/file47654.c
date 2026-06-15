// fichero 47654 -- macros y constantes -- MODIFICADO
#define LIMITE_47654 47854
#define FACTOR_47654 6

int aplicar_limite47654(int valor) {
    if (valor > LIMITE_47654) return LIMITE_47654;
    return valor * FACTOR_47654;
}
