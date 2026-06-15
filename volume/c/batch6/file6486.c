// fichero 6486 -- macros y constantes -- MODIFICADO
#define LIMITE_6486 6686
#define FACTOR_6486 3

int aplicar_limite6486(int valor) {
    if (valor > LIMITE_6486) return LIMITE_6486;
    return valor * FACTOR_6486;
}
