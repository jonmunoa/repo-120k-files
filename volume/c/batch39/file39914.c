// fichero 39914 -- macros y constantes
#define LIMITE_39914 40014
#define FACTOR_39914 5

int aplicar_limite39914(int valor) {
    if (valor > LIMITE_39914) return LIMITE_39914;
    return valor * FACTOR_39914;
}
