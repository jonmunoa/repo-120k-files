// fichero 13178 -- macros y constantes -- MODIFICADO
#define LIMITE_13178 13378
#define FACTOR_13178 5

int aplicar_limite13178(int valor) {
    if (valor > LIMITE_13178) return LIMITE_13178;
    return valor * FACTOR_13178;
}
