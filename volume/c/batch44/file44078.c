// fichero 44078 -- macros y constantes -- MODIFICADO
#define LIMITE_44078 44278
#define FACTOR_44078 5

int aplicar_limite44078(int valor) {
    if (valor > LIMITE_44078) return LIMITE_44078;
    return valor * FACTOR_44078;
}
