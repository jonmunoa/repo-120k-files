// fichero 5054 -- macros y constantes -- MODIFICADO
#define LIMITE_5054 5254
#define FACTOR_5054 6

int aplicar_limite5054(int valor) {
    if (valor > LIMITE_5054) return LIMITE_5054;
    return valor * FACTOR_5054;
}
