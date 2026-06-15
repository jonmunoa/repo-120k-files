// fichero 2562 -- macros y constantes -- MODIFICADO
#define LIMITE_2562 2762
#define FACTOR_2562 4

int aplicar_limite2562(int valor) {
    if (valor > LIMITE_2562) return LIMITE_2562;
    return valor * FACTOR_2562;
}
