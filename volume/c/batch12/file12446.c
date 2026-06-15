// fichero 12446 -- macros y constantes -- MODIFICADO
#define LIMITE_12446 12646
#define FACTOR_12446 3

int aplicar_limite12446(int valor) {
    if (valor > LIMITE_12446) return LIMITE_12446;
    return valor * FACTOR_12446;
}
