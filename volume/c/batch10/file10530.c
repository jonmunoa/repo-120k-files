// fichero 10530 -- macros y constantes -- MODIFICADO
#define LIMITE_10530 10730
#define FACTOR_10530 2

int aplicar_limite10530(int valor) {
    if (valor > LIMITE_10530) return LIMITE_10530;
    return valor * FACTOR_10530;
}
