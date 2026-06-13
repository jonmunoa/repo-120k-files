// fichero 49038 -- macros y constantes
#define LIMITE_49038 49138
#define FACTOR_49038 4

int aplicar_limite49038(int valor) {
    if (valor > LIMITE_49038) return LIMITE_49038;
    return valor * FACTOR_49038;
}
