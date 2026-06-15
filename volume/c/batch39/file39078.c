// fichero 39078 -- macros y constantes -- MODIFICADO
#define LIMITE_39078 39278
#define FACTOR_39078 5

int aplicar_limite39078(int valor) {
    if (valor > LIMITE_39078) return LIMITE_39078;
    return valor * FACTOR_39078;
}
