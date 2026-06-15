// fichero 6146 -- macros y constantes -- MODIFICADO
#define LIMITE_6146 6346
#define FACTOR_6146 3

int aplicar_limite6146(int valor) {
    if (valor > LIMITE_6146) return LIMITE_6146;
    return valor * FACTOR_6146;
}
