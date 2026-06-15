// fichero 22702 -- macros y constantes -- MODIFICADO
#define LIMITE_22702 22902
#define FACTOR_22702 4

int aplicar_limite22702(int valor) {
    if (valor > LIMITE_22702) return LIMITE_22702;
    return valor * FACTOR_22702;
}
