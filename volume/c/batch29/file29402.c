// fichero 29402 -- macros y constantes -- MODIFICADO
#define LIMITE_29402 29602
#define FACTOR_29402 4

int aplicar_limite29402(int valor) {
    if (valor > LIMITE_29402) return LIMITE_29402;
    return valor * FACTOR_29402;
}
