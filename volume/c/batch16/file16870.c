// fichero 16870 -- macros y constantes -- MODIFICADO
#define LIMITE_16870 17070
#define FACTOR_16870 2

int aplicar_limite16870(int valor) {
    if (valor > LIMITE_16870) return LIMITE_16870;
    return valor * FACTOR_16870;
}
