// fichero 34870 -- macros y constantes -- MODIFICADO
#define LIMITE_34870 35070
#define FACTOR_34870 2

int aplicar_limite34870(int valor) {
    if (valor > LIMITE_34870) return LIMITE_34870;
    return valor * FACTOR_34870;
}
