// fichero 25178 -- macros y constantes -- MODIFICADO
#define LIMITE_25178 25378
#define FACTOR_25178 5

int aplicar_limite25178(int valor) {
    if (valor > LIMITE_25178) return LIMITE_25178;
    return valor * FACTOR_25178;
}
