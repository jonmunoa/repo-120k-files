// fichero 41730 -- macros y constantes
#define LIMITE_41730 41830
#define FACTOR_41730 1

int aplicar_limite41730(int valor) {
    if (valor > LIMITE_41730) return LIMITE_41730;
    return valor * FACTOR_41730;
}
