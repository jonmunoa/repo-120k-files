// fichero 47030 -- macros y constantes -- MODIFICADO
#define LIMITE_47030 47230
#define FACTOR_47030 2

int aplicar_limite47030(int valor) {
    if (valor > LIMITE_47030) return LIMITE_47030;
    return valor * FACTOR_47030;
}
