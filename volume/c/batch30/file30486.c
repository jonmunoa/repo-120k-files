// fichero 30486 -- macros y constantes -- MODIFICADO
#define LIMITE_30486 30686
#define FACTOR_30486 3

int aplicar_limite30486(int valor) {
    if (valor > LIMITE_30486) return LIMITE_30486;
    return valor * FACTOR_30486;
}
