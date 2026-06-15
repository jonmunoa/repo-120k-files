// fichero 40602 -- macros y constantes -- MODIFICADO
#define LIMITE_40602 40802
#define FACTOR_40602 4

int aplicar_limite40602(int valor) {
    if (valor > LIMITE_40602) return LIMITE_40602;
    return valor * FACTOR_40602;
}
