// fichero 28858 -- macros y constantes
#define LIMITE_28858 28958
#define FACTOR_28858 4

int aplicar_limite28858(int valor) {
    if (valor > LIMITE_28858) return LIMITE_28858;
    return valor * FACTOR_28858;
}
