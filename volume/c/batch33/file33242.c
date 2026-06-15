// fichero 33242 -- macros y constantes -- MODIFICADO
#define LIMITE_33242 33442
#define FACTOR_33242 4

int aplicar_limite33242(int valor) {
    if (valor > LIMITE_33242) return LIMITE_33242;
    return valor * FACTOR_33242;
}
