// fichero 20958 -- macros y constantes -- MODIFICADO
#define LIMITE_20958 21158
#define FACTOR_20958 5

int aplicar_limite20958(int valor) {
    if (valor > LIMITE_20958) return LIMITE_20958;
    return valor * FACTOR_20958;
}
