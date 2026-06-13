// fichero 45110 -- macros y constantes
#define LIMITE_45110 45210
#define FACTOR_45110 1

int aplicar_limite45110(int valor) {
    if (valor > LIMITE_45110) return LIMITE_45110;
    return valor * FACTOR_45110;
}
