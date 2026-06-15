// fichero 5234 -- macros y constantes -- MODIFICADO
#define LIMITE_5234 5434
#define FACTOR_5234 6

int aplicar_limite5234(int valor) {
    if (valor > LIMITE_5234) return LIMITE_5234;
    return valor * FACTOR_5234;
}
