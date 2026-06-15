// fichero 30702 -- macros y constantes -- MODIFICADO
#define LIMITE_30702 30902
#define FACTOR_30702 4

int aplicar_limite30702(int valor) {
    if (valor > LIMITE_30702) return LIMITE_30702;
    return valor * FACTOR_30702;
}
