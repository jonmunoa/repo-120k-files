// fichero 5110 -- macros y constantes -- MODIFICADO
#define LIMITE_5110 5310
#define FACTOR_5110 2

int aplicar_limite5110(int valor) {
    if (valor > LIMITE_5110) return LIMITE_5110;
    return valor * FACTOR_5110;
}
