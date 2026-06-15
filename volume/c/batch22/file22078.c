// fichero 22078 -- macros y constantes -- MODIFICADO
#define LIMITE_22078 22278
#define FACTOR_22078 5

int aplicar_limite22078(int valor) {
    if (valor > LIMITE_22078) return LIMITE_22078;
    return valor * FACTOR_22078;
}
