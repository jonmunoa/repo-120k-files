// fichero 39242 -- macros y constantes -- MODIFICADO
#define LIMITE_39242 39442
#define FACTOR_39242 4

int aplicar_limite39242(int valor) {
    if (valor > LIMITE_39242) return LIMITE_39242;
    return valor * FACTOR_39242;
}
