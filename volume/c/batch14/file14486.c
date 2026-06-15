// fichero 14486 -- macros y constantes -- MODIFICADO
#define LIMITE_14486 14686
#define FACTOR_14486 3

int aplicar_limite14486(int valor) {
    if (valor > LIMITE_14486) return LIMITE_14486;
    return valor * FACTOR_14486;
}
