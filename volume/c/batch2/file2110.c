// fichero 2110 -- macros y constantes -- MODIFICADO
#define LIMITE_2110 2310
#define FACTOR_2110 2

int aplicar_limite2110(int valor) {
    if (valor > LIMITE_2110) return LIMITE_2110;
    return valor * FACTOR_2110;
}
