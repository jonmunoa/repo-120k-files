// fichero 42854 -- macros y constantes -- MODIFICADO
#define LIMITE_42854 43054
#define FACTOR_42854 6

int aplicar_limite42854(int valor) {
    if (valor > LIMITE_42854) return LIMITE_42854;
    return valor * FACTOR_42854;
}
