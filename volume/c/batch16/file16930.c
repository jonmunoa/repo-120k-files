// fichero 16930 -- macros y constantes -- MODIFICADO
#define LIMITE_16930 17130
#define FACTOR_16930 2

int aplicar_limite16930(int valor) {
    if (valor > LIMITE_16930) return LIMITE_16930;
    return valor * FACTOR_16930;
}
