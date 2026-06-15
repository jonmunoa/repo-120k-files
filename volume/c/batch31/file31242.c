// fichero 31242 -- macros y constantes -- MODIFICADO
#define LIMITE_31242 31442
#define FACTOR_31242 4

int aplicar_limite31242(int valor) {
    if (valor > LIMITE_31242) return LIMITE_31242;
    return valor * FACTOR_31242;
}
