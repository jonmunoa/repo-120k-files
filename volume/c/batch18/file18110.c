// fichero 18110 -- macros y constantes -- MODIFICADO
#define LIMITE_18110 18310
#define FACTOR_18110 2

int aplicar_limite18110(int valor) {
    if (valor > LIMITE_18110) return LIMITE_18110;
    return valor * FACTOR_18110;
}
