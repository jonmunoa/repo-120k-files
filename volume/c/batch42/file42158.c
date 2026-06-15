// fichero 42158 -- macros y constantes -- MODIFICADO
#define LIMITE_42158 42358
#define FACTOR_42158 5

int aplicar_limite42158(int valor) {
    if (valor > LIMITE_42158) return LIMITE_42158;
    return valor * FACTOR_42158;
}
