// fichero 17838 -- macros y constantes -- MODIFICADO
#define LIMITE_17838 18038
#define FACTOR_17838 5

int aplicar_limite17838(int valor) {
    if (valor > LIMITE_17838) return LIMITE_17838;
    return valor * FACTOR_17838;
}
