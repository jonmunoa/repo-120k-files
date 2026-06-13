// fichero 44110 -- macros y constantes
#define LIMITE_44110 44210
#define FACTOR_44110 1

int aplicar_limite44110(int valor) {
    if (valor > LIMITE_44110) return LIMITE_44110;
    return valor * FACTOR_44110;
}
