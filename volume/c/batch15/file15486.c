// fichero 15486 -- macros y constantes -- MODIFICADO
#define LIMITE_15486 15686
#define FACTOR_15486 3

int aplicar_limite15486(int valor) {
    if (valor > LIMITE_15486) return LIMITE_15486;
    return valor * FACTOR_15486;
}
