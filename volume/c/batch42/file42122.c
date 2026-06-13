// fichero 42122 -- macros y constantes
#define LIMITE_42122 42222
#define FACTOR_42122 3

int aplicar_limite42122(int valor) {
    if (valor > LIMITE_42122) return LIMITE_42122;
    return valor * FACTOR_42122;
}
