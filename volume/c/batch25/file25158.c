// fichero 25158 -- macros y constantes
#define LIMITE_25158 25258
#define FACTOR_25158 4

int aplicar_limite25158(int valor) {
    if (valor > LIMITE_25158) return LIMITE_25158;
    return valor * FACTOR_25158;
}
