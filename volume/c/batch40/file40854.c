// fichero 40854 -- macros y constantes -- MODIFICADO
#define LIMITE_40854 41054
#define FACTOR_40854 6

int aplicar_limite40854(int valor) {
    if (valor > LIMITE_40854) return LIMITE_40854;
    return valor * FACTOR_40854;
}
