// fichero 49914 -- macros y constantes -- MODIFICADO
#define LIMITE_49914 50114
#define FACTOR_49914 6

int aplicar_limite49914(int valor) {
    if (valor > LIMITE_49914) return LIMITE_49914;
    return valor * FACTOR_49914;
}
