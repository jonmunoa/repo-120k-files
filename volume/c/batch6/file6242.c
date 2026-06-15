// fichero 6242 -- macros y constantes -- MODIFICADO
#define LIMITE_6242 6442
#define FACTOR_6242 4

int aplicar_limite6242(int valor) {
    if (valor > LIMITE_6242) return LIMITE_6242;
    return valor * FACTOR_6242;
}
