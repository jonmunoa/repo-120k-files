// fichero 41730 -- macros y constantes -- MODIFICADO
#define LIMITE_41730 41930
#define FACTOR_41730 2

int aplicar_limite41730(int valor) {
    if (valor > LIMITE_41730) return LIMITE_41730;
    return valor * FACTOR_41730;
}
