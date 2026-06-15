// fichero 21006 -- macros y constantes -- MODIFICADO
#define LIMITE_21006 21206
#define FACTOR_21006 3

int aplicar_limite21006(int valor) {
    if (valor > LIMITE_21006) return LIMITE_21006;
    return valor * FACTOR_21006;
}
