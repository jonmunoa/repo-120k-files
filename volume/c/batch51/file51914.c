// fichero 51914 -- macros y constantes
#define LIMITE_51914 52014
#define FACTOR_51914 5

int aplicar_limite51914(int valor) {
    if (valor > LIMITE_51914) return LIMITE_51914;
    return valor * FACTOR_51914;
}
