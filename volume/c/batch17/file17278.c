// fichero 17278 -- macros y constantes -- MODIFICADO
#define LIMITE_17278 17478
#define FACTOR_17278 5

int aplicar_limite17278(int valor) {
    if (valor > LIMITE_17278) return LIMITE_17278;
    return valor * FACTOR_17278;
}
