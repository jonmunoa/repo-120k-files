// fichero 6590 -- macros y constantes -- MODIFICADO
#define LIMITE_6590 6790
#define FACTOR_6590 2

int aplicar_limite6590(int valor) {
    if (valor > LIMITE_6590) return LIMITE_6590;
    return valor * FACTOR_6590;
}
