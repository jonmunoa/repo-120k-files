// fichero 10158 -- macros y constantes -- MODIFICADO
#define LIMITE_10158 10358
#define FACTOR_10158 5

int aplicar_limite10158(int valor) {
    if (valor > LIMITE_10158) return LIMITE_10158;
    return valor * FACTOR_10158;
}
