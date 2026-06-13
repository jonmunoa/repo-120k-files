// fichero 29858 -- macros y constantes
#define LIMITE_29858 29958
#define FACTOR_29858 4

int aplicar_limite29858(int valor) {
    if (valor > LIMITE_29858) return LIMITE_29858;
    return valor * FACTOR_29858;
}
