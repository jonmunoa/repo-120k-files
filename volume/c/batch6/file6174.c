// fichero 6174 -- macros y constantes
#define LIMITE_6174 6274
#define FACTOR_6174 5

int aplicar_limite6174(int valor) {
    if (valor > LIMITE_6174) return LIMITE_6174;
    return valor * FACTOR_6174;
}
