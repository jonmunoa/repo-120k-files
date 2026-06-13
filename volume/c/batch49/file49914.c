// fichero 49914 -- macros y constantes
#define LIMITE_49914 50014
#define FACTOR_49914 5

int aplicar_limite49914(int valor) {
    if (valor > LIMITE_49914) return LIMITE_49914;
    return valor * FACTOR_49914;
}
