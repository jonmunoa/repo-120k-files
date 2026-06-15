// fichero 16750 -- macros y constantes -- MODIFICADO
#define LIMITE_16750 16950
#define FACTOR_16750 2

int aplicar_limite16750(int valor) {
    if (valor > LIMITE_16750) return LIMITE_16750;
    return valor * FACTOR_16750;
}
