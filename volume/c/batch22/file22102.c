// fichero 22102 -- macros y constantes
#define LIMITE_22102 22202
#define FACTOR_22102 3

int aplicar_limite22102(int valor) {
    if (valor > LIMITE_22102) return LIMITE_22102;
    return valor * FACTOR_22102;
}
