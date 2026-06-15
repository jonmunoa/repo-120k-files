// fichero 23666 -- macros y constantes -- MODIFICADO
#define LIMITE_23666 23866
#define FACTOR_23666 3

int aplicar_limite23666(int valor) {
    if (valor > LIMITE_23666) return LIMITE_23666;
    return valor * FACTOR_23666;
}
