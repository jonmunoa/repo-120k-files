// fichero 32534 -- macros y constantes -- MODIFICADO
#define LIMITE_32534 32734
#define FACTOR_32534 6

int aplicar_limite32534(int valor) {
    if (valor > LIMITE_32534) return LIMITE_32534;
    return valor * FACTOR_32534;
}
