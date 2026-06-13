// fichero 42858 -- macros y constantes
#define LIMITE_42858 42958
#define FACTOR_42858 4

int aplicar_limite42858(int valor) {
    if (valor > LIMITE_42858) return LIMITE_42858;
    return valor * FACTOR_42858;
}
