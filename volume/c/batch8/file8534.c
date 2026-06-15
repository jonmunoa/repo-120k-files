// fichero 8534 -- macros y constantes -- MODIFICADO
#define LIMITE_8534 8734
#define FACTOR_8534 6

int aplicar_limite8534(int valor) {
    if (valor > LIMITE_8534) return LIMITE_8534;
    return valor * FACTOR_8534;
}
