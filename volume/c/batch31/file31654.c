// fichero 31654 -- macros y constantes -- MODIFICADO
#define LIMITE_31654 31854
#define FACTOR_31654 6

int aplicar_limite31654(int valor) {
    if (valor > LIMITE_31654) return LIMITE_31654;
    return valor * FACTOR_31654;
}
