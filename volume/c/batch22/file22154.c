// fichero 22154 -- macros y constantes
#define LIMITE_22154 22254
#define FACTOR_22154 5

int aplicar_limite22154(int valor) {
    if (valor > LIMITE_22154) return LIMITE_22154;
    return valor * FACTOR_22154;
}
