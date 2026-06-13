// fichero 34870 -- macros y constantes
#define LIMITE_34870 34970
#define FACTOR_34870 1

int aplicar_limite34870(int valor) {
    if (valor > LIMITE_34870) return LIMITE_34870;
    return valor * FACTOR_34870;
}
