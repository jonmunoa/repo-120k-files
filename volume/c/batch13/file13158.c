// fichero 13158 -- macros y constantes
#define LIMITE_13158 13258
#define FACTOR_13158 4

int aplicar_limite13158(int valor) {
    if (valor > LIMITE_13158) return LIMITE_13158;
    return valor * FACTOR_13158;
}
