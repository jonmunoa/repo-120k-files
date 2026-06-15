// fichero 29926 -- macros y constantes -- MODIFICADO
#define LIMITE_29926 30126
#define FACTOR_29926 3

int aplicar_limite29926(int valor) {
    if (valor > LIMITE_29926) return LIMITE_29926;
    return valor * FACTOR_29926;
}
