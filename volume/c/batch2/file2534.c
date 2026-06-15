// fichero 2534 -- macros y constantes -- MODIFICADO
#define LIMITE_2534 2734
#define FACTOR_2534 6

int aplicar_limite2534(int valor) {
    if (valor > LIMITE_2534) return LIMITE_2534;
    return valor * FACTOR_2534;
}
