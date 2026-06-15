// fichero 28078 -- macros y constantes -- MODIFICADO
#define LIMITE_28078 28278
#define FACTOR_28078 5

int aplicar_limite28078(int valor) {
    if (valor > LIMITE_28078) return LIMITE_28078;
    return valor * FACTOR_28078;
}
