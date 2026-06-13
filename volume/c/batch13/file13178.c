// fichero 13178 -- macros y constantes
#define LIMITE_13178 13278
#define FACTOR_13178 4

int aplicar_limite13178(int valor) {
    if (valor > LIMITE_13178) return LIMITE_13178;
    return valor * FACTOR_13178;
}
