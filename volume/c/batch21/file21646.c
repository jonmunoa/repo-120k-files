// fichero 21646 -- macros y constantes -- MODIFICADO
#define LIMITE_21646 21846
#define FACTOR_21646 3

int aplicar_limite21646(int valor) {
    if (valor > LIMITE_21646) return LIMITE_21646;
    return valor * FACTOR_21646;
}
