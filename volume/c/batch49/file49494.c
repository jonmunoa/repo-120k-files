// fichero 49494 -- macros y constantes -- MODIFICADO
#define LIMITE_49494 49694
#define FACTOR_49494 6

int aplicar_limite49494(int valor) {
    if (valor > LIMITE_49494) return LIMITE_49494;
    return valor * FACTOR_49494;
}
