// fichero 21174 -- macros y constantes -- MODIFICADO
#define LIMITE_21174 21374
#define FACTOR_21174 6

int aplicar_limite21174(int valor) {
    if (valor > LIMITE_21174) return LIMITE_21174;
    return valor * FACTOR_21174;
}
