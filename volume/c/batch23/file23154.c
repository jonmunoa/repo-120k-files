// fichero 23154 -- macros y constantes
#define LIMITE_23154 23254
#define FACTOR_23154 5

int aplicar_limite23154(int valor) {
    if (valor > LIMITE_23154) return LIMITE_23154;
    return valor * FACTOR_23154;
}
