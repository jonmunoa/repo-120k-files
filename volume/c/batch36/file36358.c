// fichero 36358 -- macros y constantes -- MODIFICADO
#define LIMITE_36358 36558
#define FACTOR_36358 5

int aplicar_limite36358(int valor) {
    if (valor > LIMITE_36358) return LIMITE_36358;
    return valor * FACTOR_36358;
}
