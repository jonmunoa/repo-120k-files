// fichero 45078 -- macros y constantes -- MODIFICADO
#define LIMITE_45078 45278
#define FACTOR_45078 5

int aplicar_limite45078(int valor) {
    if (valor > LIMITE_45078) return LIMITE_45078;
    return valor * FACTOR_45078;
}
