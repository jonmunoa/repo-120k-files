// fichero 18138 -- macros y constantes -- MODIFICADO
#define LIMITE_18138 18338
#define FACTOR_18138 5

int aplicar_limite18138(int valor) {
    if (valor > LIMITE_18138) return LIMITE_18138;
    return valor * FACTOR_18138;
}
