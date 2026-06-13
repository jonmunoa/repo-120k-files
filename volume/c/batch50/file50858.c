// fichero 50858 -- macros y constantes
#define LIMITE_50858 50958
#define FACTOR_50858 4

int aplicar_limite50858(int valor) {
    if (valor > LIMITE_50858) return LIMITE_50858;
    return valor * FACTOR_50858;
}
