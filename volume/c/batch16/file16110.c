// fichero 16110 -- macros y constantes -- MODIFICADO
#define LIMITE_16110 16310
#define FACTOR_16110 2

int aplicar_limite16110(int valor) {
    if (valor > LIMITE_16110) return LIMITE_16110;
    return valor * FACTOR_16110;
}
