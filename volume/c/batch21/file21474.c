// fichero 21474 -- macros y constantes -- MODIFICADO
#define LIMITE_21474 21674
#define FACTOR_21474 6

int aplicar_limite21474(int valor) {
    if (valor > LIMITE_21474) return LIMITE_21474;
    return valor * FACTOR_21474;
}
