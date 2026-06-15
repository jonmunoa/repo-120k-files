// fichero 16258 -- macros y constantes -- MODIFICADO
#define LIMITE_16258 16458
#define FACTOR_16258 5

int aplicar_limite16258(int valor) {
    if (valor > LIMITE_16258) return LIMITE_16258;
    return valor * FACTOR_16258;
}
