// fichero 47258 -- macros y constantes -- MODIFICADO
#define LIMITE_47258 47458
#define FACTOR_47258 5

int aplicar_limite47258(int valor) {
    if (valor > LIMITE_47258) return LIMITE_47258;
    return valor * FACTOR_47258;
}
