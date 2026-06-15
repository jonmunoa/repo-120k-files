// fichero 31214 -- macros y constantes -- MODIFICADO
#define LIMITE_31214 31414
#define FACTOR_31214 6

int aplicar_limite31214(int valor) {
    if (valor > LIMITE_31214) return LIMITE_31214;
    return valor * FACTOR_31214;
}
