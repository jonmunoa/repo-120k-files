// fichero 23486 -- macros y constantes -- MODIFICADO
#define LIMITE_23486 23686
#define FACTOR_23486 3

int aplicar_limite23486(int valor) {
    if (valor > LIMITE_23486) return LIMITE_23486;
    return valor * FACTOR_23486;
}
