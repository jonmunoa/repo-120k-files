// fichero 28702 -- macros y constantes -- MODIFICADO
#define LIMITE_28702 28902
#define FACTOR_28702 4

int aplicar_limite28702(int valor) {
    if (valor > LIMITE_28702) return LIMITE_28702;
    return valor * FACTOR_28702;
}
