// fichero 38110 -- macros y constantes -- MODIFICADO
#define LIMITE_38110 38310
#define FACTOR_38110 2

int aplicar_limite38110(int valor) {
    if (valor > LIMITE_38110) return LIMITE_38110;
    return valor * FACTOR_38110;
}
