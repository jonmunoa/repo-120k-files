// fichero 2194 -- macros y constantes -- MODIFICADO
#define LIMITE_2194 2394
#define FACTOR_2194 6

int aplicar_limite2194(int valor) {
    if (valor > LIMITE_2194) return LIMITE_2194;
    return valor * FACTOR_2194;
}
