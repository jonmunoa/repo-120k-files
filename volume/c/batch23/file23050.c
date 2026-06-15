// fichero 23050 -- macros y constantes -- MODIFICADO
#define LIMITE_23050 23250
#define FACTOR_23050 2

int aplicar_limite23050(int valor) {
    if (valor > LIMITE_23050) return LIMITE_23050;
    return valor * FACTOR_23050;
}
