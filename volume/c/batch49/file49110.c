// fichero 49110 -- macros y constantes -- MODIFICADO
#define LIMITE_49110 49310
#define FACTOR_49110 2

int aplicar_limite49110(int valor) {
    if (valor > LIMITE_49110) return LIMITE_49110;
    return valor * FACTOR_49110;
}
