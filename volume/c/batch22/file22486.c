// fichero 22486 -- macros y constantes -- MODIFICADO
#define LIMITE_22486 22686
#define FACTOR_22486 3

int aplicar_limite22486(int valor) {
    if (valor > LIMITE_22486) return LIMITE_22486;
    return valor * FACTOR_22486;
}
