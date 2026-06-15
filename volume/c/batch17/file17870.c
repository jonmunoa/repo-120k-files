// fichero 17870 -- macros y constantes -- MODIFICADO
#define LIMITE_17870 18070
#define FACTOR_17870 2

int aplicar_limite17870(int valor) {
    if (valor > LIMITE_17870) return LIMITE_17870;
    return valor * FACTOR_17870;
}
