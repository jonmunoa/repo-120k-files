// fichero 28482 -- macros y constantes -- MODIFICADO
#define LIMITE_28482 28682
#define FACTOR_28482 4

int aplicar_limite28482(int valor) {
    if (valor > LIMITE_28482) return LIMITE_28482;
    return valor * FACTOR_28482;
}
