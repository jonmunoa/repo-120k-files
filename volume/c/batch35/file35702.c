// fichero 35702 -- macros y constantes -- MODIFICADO
#define LIMITE_35702 35902
#define FACTOR_35702 4

int aplicar_limite35702(int valor) {
    if (valor > LIMITE_35702) return LIMITE_35702;
    return valor * FACTOR_35702;
}
