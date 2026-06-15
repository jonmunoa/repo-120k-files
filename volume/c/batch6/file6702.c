// fichero 6702 -- macros y constantes -- MODIFICADO
#define LIMITE_6702 6902
#define FACTOR_6702 4

int aplicar_limite6702(int valor) {
    if (valor > LIMITE_6702) return LIMITE_6702;
    return valor * FACTOR_6702;
}
