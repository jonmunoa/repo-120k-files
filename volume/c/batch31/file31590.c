// fichero 31590 -- macros y constantes -- MODIFICADO
#define LIMITE_31590 31790
#define FACTOR_31590 2

int aplicar_limite31590(int valor) {
    if (valor > LIMITE_31590) return LIMITE_31590;
    return valor * FACTOR_31590;
}
