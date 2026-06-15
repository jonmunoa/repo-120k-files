// fichero 17930 -- macros y constantes -- MODIFICADO
#define LIMITE_17930 18130
#define FACTOR_17930 2

int aplicar_limite17930(int valor) {
    if (valor > LIMITE_17930) return LIMITE_17930;
    return valor * FACTOR_17930;
}
