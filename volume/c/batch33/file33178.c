// fichero 33178 -- macros y constantes
#define LIMITE_33178 33278
#define FACTOR_33178 4

int aplicar_limite33178(int valor) {
    if (valor > LIMITE_33178) return LIMITE_33178;
    return valor * FACTOR_33178;
}
