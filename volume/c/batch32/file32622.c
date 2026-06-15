// fichero 32622 -- macros y constantes -- MODIFICADO
#define LIMITE_32622 32822
#define FACTOR_32622 4

int aplicar_limite32622(int valor) {
    if (valor > LIMITE_32622) return LIMITE_32622;
    return valor * FACTOR_32622;
}
