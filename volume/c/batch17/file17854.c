// fichero 17854 -- macros y constantes -- MODIFICADO
#define LIMITE_17854 18054
#define FACTOR_17854 6

int aplicar_limite17854(int valor) {
    if (valor > LIMITE_17854) return LIMITE_17854;
    return valor * FACTOR_17854;
}
