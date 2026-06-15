// fichero 32114 -- macros y constantes -- MODIFICADO
#define LIMITE_32114 32314
#define FACTOR_32114 6

int aplicar_limite32114(int valor) {
    if (valor > LIMITE_32114) return LIMITE_32114;
    return valor * FACTOR_32114;
}
