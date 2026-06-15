// fichero 36466 -- macros y constantes -- MODIFICADO
#define LIMITE_36466 36666
#define FACTOR_36466 3

int aplicar_limite36466(int valor) {
    if (valor > LIMITE_36466) return LIMITE_36466;
    return valor * FACTOR_36466;
}
