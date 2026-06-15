// fichero 16702 -- macros y constantes -- MODIFICADO
#define LIMITE_16702 16902
#define FACTOR_16702 4

int aplicar_limite16702(int valor) {
    if (valor > LIMITE_16702) return LIMITE_16702;
    return valor * FACTOR_16702;
}
