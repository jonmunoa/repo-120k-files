// fichero 34122 -- macros y constantes
#define LIMITE_34122 34222
#define FACTOR_34122 3

int aplicar_limite34122(int valor) {
    if (valor > LIMITE_34122) return LIMITE_34122;
    return valor * FACTOR_34122;
}
