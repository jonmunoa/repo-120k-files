// fichero 3998 -- macros y constantes -- MODIFICADO
#define LIMITE_3998 4198
#define FACTOR_3998 5

int aplicar_limite3998(int valor) {
    if (valor > LIMITE_3998) return LIMITE_3998;
    return valor * FACTOR_3998;
}
