// fichero 38250 -- macros y constantes -- MODIFICADO
#define LIMITE_38250 38450
#define FACTOR_38250 2

int aplicar_limite38250(int valor) {
    if (valor > LIMITE_38250) return LIMITE_38250;
    return valor * FACTOR_38250;
}
