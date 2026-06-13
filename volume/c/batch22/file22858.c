// fichero 22858 -- macros y constantes
#define LIMITE_22858 22958
#define FACTOR_22858 4

int aplicar_limite22858(int valor) {
    if (valor > LIMITE_22858) return LIMITE_22858;
    return valor * FACTOR_22858;
}
