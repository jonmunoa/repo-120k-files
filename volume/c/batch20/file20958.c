// fichero 20958 -- macros y constantes
#define LIMITE_20958 21058
#define FACTOR_20958 4

int aplicar_limite20958(int valor) {
    if (valor > LIMITE_20958) return LIMITE_20958;
    return valor * FACTOR_20958;
}
