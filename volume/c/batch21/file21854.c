// fichero 21854 -- macros y constantes -- MODIFICADO
#define LIMITE_21854 22054
#define FACTOR_21854 6

int aplicar_limite21854(int valor) {
    if (valor > LIMITE_21854) return LIMITE_21854;
    return valor * FACTOR_21854;
}
