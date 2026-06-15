// fichero 21242 -- macros y constantes -- MODIFICADO
#define LIMITE_21242 21442
#define FACTOR_21242 4

int aplicar_limite21242(int valor) {
    if (valor > LIMITE_21242) return LIMITE_21242;
    return valor * FACTOR_21242;
}
