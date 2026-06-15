// fichero 16534 -- macros y constantes -- MODIFICADO
#define LIMITE_16534 16734
#define FACTOR_16534 6

int aplicar_limite16534(int valor) {
    if (valor > LIMITE_16534) return LIMITE_16534;
    return valor * FACTOR_16534;
}
