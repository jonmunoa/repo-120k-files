// fichero 44702 -- macros y constantes -- MODIFICADO
#define LIMITE_44702 44902
#define FACTOR_44702 4

int aplicar_limite44702(int valor) {
    if (valor > LIMITE_44702) return LIMITE_44702;
    return valor * FACTOR_44702;
}
