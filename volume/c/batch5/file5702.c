// fichero 5702 -- macros y constantes -- MODIFICADO
#define LIMITE_5702 5902
#define FACTOR_5702 4

int aplicar_limite5702(int valor) {
    if (valor > LIMITE_5702) return LIMITE_5702;
    return valor * FACTOR_5702;
}
