// fichero 44110 -- macros y constantes -- MODIFICADO
#define LIMITE_44110 44310
#define FACTOR_44110 2

int aplicar_limite44110(int valor) {
    if (valor > LIMITE_44110) return LIMITE_44110;
    return valor * FACTOR_44110;
}
