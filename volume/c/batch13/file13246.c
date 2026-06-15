// fichero 13246 -- macros y constantes -- MODIFICADO
#define LIMITE_13246 13446
#define FACTOR_13246 3

int aplicar_limite13246(int valor) {
    if (valor > LIMITE_13246) return LIMITE_13246;
    return valor * FACTOR_13246;
}
