// fichero 49858 -- macros y constantes
#define LIMITE_49858 49958
#define FACTOR_49858 4

int aplicar_limite49858(int valor) {
    if (valor > LIMITE_49858) return LIMITE_49858;
    return valor * FACTOR_49858;
}
