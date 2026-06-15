// fichero 29174 -- macros y constantes -- MODIFICADO
#define LIMITE_29174 29374
#define FACTOR_29174 6

int aplicar_limite29174(int valor) {
    if (valor > LIMITE_29174) return LIMITE_29174;
    return valor * FACTOR_29174;
}
