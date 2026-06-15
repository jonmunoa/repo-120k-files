// fichero 21178 -- macros y constantes -- MODIFICADO
#define LIMITE_21178 21378
#define FACTOR_21178 5

int aplicar_limite21178(int valor) {
    if (valor > LIMITE_21178) return LIMITE_21178;
    return valor * FACTOR_21178;
}
