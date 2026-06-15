// fichero 23654 -- macros y constantes -- MODIFICADO
#define LIMITE_23654 23854
#define FACTOR_23654 6

int aplicar_limite23654(int valor) {
    if (valor > LIMITE_23654) return LIMITE_23654;
    return valor * FACTOR_23654;
}
