// fichero 3054 -- macros y constantes -- MODIFICADO
#define LIMITE_3054 3254
#define FACTOR_3054 6

int aplicar_limite3054(int valor) {
    if (valor > LIMITE_3054) return LIMITE_3054;
    return valor * FACTOR_3054;
}
