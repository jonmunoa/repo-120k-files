// fichero 21042 -- macros y constantes -- MODIFICADO
#define LIMITE_21042 21242
#define FACTOR_21042 4

int aplicar_limite21042(int valor) {
    if (valor > LIMITE_21042) return LIMITE_21042;
    return valor * FACTOR_21042;
}
