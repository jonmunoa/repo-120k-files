// fichero 38854 -- macros y constantes -- MODIFICADO
#define LIMITE_38854 39054
#define FACTOR_38854 6

int aplicar_limite38854(int valor) {
    if (valor > LIMITE_38854) return LIMITE_38854;
    return valor * FACTOR_38854;
}
