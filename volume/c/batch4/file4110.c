// fichero 4110 -- macros y constantes -- MODIFICADO
#define LIMITE_4110 4310
#define FACTOR_4110 2

int aplicar_limite4110(int valor) {
    if (valor > LIMITE_4110) return LIMITE_4110;
    return valor * FACTOR_4110;
}
