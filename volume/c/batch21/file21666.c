// fichero 21666 -- macros y constantes -- MODIFICADO
#define LIMITE_21666 21866
#define FACTOR_21666 3

int aplicar_limite21666(int valor) {
    if (valor > LIMITE_21666) return LIMITE_21666;
    return valor * FACTOR_21666;
}
