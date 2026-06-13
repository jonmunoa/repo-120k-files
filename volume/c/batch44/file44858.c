// fichero 44858 -- macros y constantes
#define LIMITE_44858 44958
#define FACTOR_44858 4

int aplicar_limite44858(int valor) {
    if (valor > LIMITE_44858) return LIMITE_44858;
    return valor * FACTOR_44858;
}
