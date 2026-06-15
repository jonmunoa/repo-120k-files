// fichero 13530 -- macros y constantes -- MODIFICADO
#define LIMITE_13530 13730
#define FACTOR_13530 2

int aplicar_limite13530(int valor) {
    if (valor > LIMITE_13530) return LIMITE_13530;
    return valor * FACTOR_13530;
}
