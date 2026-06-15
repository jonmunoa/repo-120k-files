// fichero 46078 -- macros y constantes -- MODIFICADO
#define LIMITE_46078 46278
#define FACTOR_46078 5

int aplicar_limite46078(int valor) {
    if (valor > LIMITE_46078) return LIMITE_46078;
    return valor * FACTOR_46078;
}
