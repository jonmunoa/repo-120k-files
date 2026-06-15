// fichero 25586 -- macros y constantes -- MODIFICADO
#define LIMITE_25586 25786
#define FACTOR_25586 3

int aplicar_limite25586(int valor) {
    if (valor > LIMITE_25586) return LIMITE_25586;
    return valor * FACTOR_25586;
}
