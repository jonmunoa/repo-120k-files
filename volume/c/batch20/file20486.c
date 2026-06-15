// fichero 20486 -- macros y constantes -- MODIFICADO
#define LIMITE_20486 20686
#define FACTOR_20486 3

int aplicar_limite20486(int valor) {
    if (valor > LIMITE_20486) return LIMITE_20486;
    return valor * FACTOR_20486;
}
