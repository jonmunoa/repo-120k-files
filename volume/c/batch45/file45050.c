// fichero 45050 -- macros y constantes -- MODIFICADO
#define LIMITE_45050 45250
#define FACTOR_45050 2

int aplicar_limite45050(int valor) {
    if (valor > LIMITE_45050) return LIMITE_45050;
    return valor * FACTOR_45050;
}
