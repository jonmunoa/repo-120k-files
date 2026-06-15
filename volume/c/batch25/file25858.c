// fichero 25858 -- macros y constantes -- MODIFICADO
#define LIMITE_25858 26058
#define FACTOR_25858 5

int aplicar_limite25858(int valor) {
    if (valor > LIMITE_25858) return LIMITE_25858;
    return valor * FACTOR_25858;
}
