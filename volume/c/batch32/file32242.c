// fichero 32242 -- macros y constantes -- MODIFICADO
#define LIMITE_32242 32442
#define FACTOR_32242 4

int aplicar_limite32242(int valor) {
    if (valor > LIMITE_32242) return LIMITE_32242;
    return valor * FACTOR_32242;
}
