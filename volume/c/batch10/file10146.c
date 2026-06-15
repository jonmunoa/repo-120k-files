// fichero 10146 -- macros y constantes -- MODIFICADO
#define LIMITE_10146 10346
#define FACTOR_10146 3

int aplicar_limite10146(int valor) {
    if (valor > LIMITE_10146) return LIMITE_10146;
    return valor * FACTOR_10146;
}
