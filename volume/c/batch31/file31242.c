// fichero 31242 -- macros y constantes
#define LIMITE_31242 31342
#define FACTOR_31242 3

int aplicar_limite31242(int valor) {
    if (valor > LIMITE_31242) return LIMITE_31242;
    return valor * FACTOR_31242;
}
