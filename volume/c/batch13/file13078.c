// fichero 13078 -- macros y constantes
#define LIMITE_13078 13178
#define FACTOR_13078 4

int aplicar_limite13078(int valor) {
    if (valor > LIMITE_13078) return LIMITE_13078;
    return valor * FACTOR_13078;
}
