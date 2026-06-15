// fichero 45110 -- macros y constantes -- MODIFICADO
#define LIMITE_45110 45310
#define FACTOR_45110 2

int aplicar_limite45110(int valor) {
    if (valor > LIMITE_45110) return LIMITE_45110;
    return valor * FACTOR_45110;
}
