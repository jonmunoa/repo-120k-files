// fichero 25854 -- macros y constantes -- MODIFICADO
#define LIMITE_25854 26054
#define FACTOR_25854 6

int aplicar_limite25854(int valor) {
    if (valor > LIMITE_25854) return LIMITE_25854;
    return valor * FACTOR_25854;
}
