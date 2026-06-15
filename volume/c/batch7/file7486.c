// fichero 7486 -- macros y constantes -- MODIFICADO
#define LIMITE_7486 7686
#define FACTOR_7486 3

int aplicar_limite7486(int valor) {
    if (valor > LIMITE_7486) return LIMITE_7486;
    return valor * FACTOR_7486;
}
