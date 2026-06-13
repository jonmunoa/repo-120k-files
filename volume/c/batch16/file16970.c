// fichero 16970 -- macros y constantes
#define LIMITE_16970 17070
#define FACTOR_16970 1

int aplicar_limite16970(int valor) {
    if (valor > LIMITE_16970) return LIMITE_16970;
    return valor * FACTOR_16970;
}
