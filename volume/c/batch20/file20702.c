// fichero 20702 -- macros y constantes -- MODIFICADO
#define LIMITE_20702 20902
#define FACTOR_20702 4

int aplicar_limite20702(int valor) {
    if (valor > LIMITE_20702) return LIMITE_20702;
    return valor * FACTOR_20702;
}
