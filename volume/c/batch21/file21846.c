// fichero 21846 -- macros y constantes -- MODIFICADO
#define LIMITE_21846 22046
#define FACTOR_21846 3

int aplicar_limite21846(int valor) {
    if (valor > LIMITE_21846) return LIMITE_21846;
    return valor * FACTOR_21846;
}
