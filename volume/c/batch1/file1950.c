// fichero 1950 -- macros y constantes -- MODIFICADO
#define LIMITE_1950 2150
#define FACTOR_1950 2

int aplicar_limite1950(int valor) {
    if (valor > LIMITE_1950) return LIMITE_1950;
    return valor * FACTOR_1950;
}
