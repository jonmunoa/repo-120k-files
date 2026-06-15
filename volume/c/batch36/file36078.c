// fichero 36078 -- macros y constantes -- MODIFICADO
#define LIMITE_36078 36278
#define FACTOR_36078 5

int aplicar_limite36078(int valor) {
    if (valor > LIMITE_36078) return LIMITE_36078;
    return valor * FACTOR_36078;
}
