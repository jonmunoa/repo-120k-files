// fichero 25858 -- macros y constantes
#define LIMITE_25858 25958
#define FACTOR_25858 4

int aplicar_limite25858(int valor) {
    if (valor > LIMITE_25858) return LIMITE_25858;
    return valor * FACTOR_25858;
}
