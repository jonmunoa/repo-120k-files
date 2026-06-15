// fichero 13550 -- macros y constantes -- MODIFICADO
#define LIMITE_13550 13750
#define FACTOR_13550 2

int aplicar_limite13550(int valor) {
    if (valor > LIMITE_13550) return LIMITE_13550;
    return valor * FACTOR_13550;
}
