// fichero 24034 -- macros y constantes -- MODIFICADO
#define LIMITE_24034 24234
#define FACTOR_24034 6

int aplicar_limite24034(int valor) {
    if (valor > LIMITE_24034) return LIMITE_24034;
    return valor * FACTOR_24034;
}
