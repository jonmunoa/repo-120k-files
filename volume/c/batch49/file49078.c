// fichero 49078 -- macros y constantes -- MODIFICADO
#define LIMITE_49078 49278
#define FACTOR_49078 5

int aplicar_limite49078(int valor) {
    if (valor > LIMITE_49078) return LIMITE_49078;
    return valor * FACTOR_49078;
}
