// fichero 21534 -- macros y constantes -- MODIFICADO
#define LIMITE_21534 21734
#define FACTOR_21534 6

int aplicar_limite21534(int valor) {
    if (valor > LIMITE_21534) return LIMITE_21534;
    return valor * FACTOR_21534;
}
