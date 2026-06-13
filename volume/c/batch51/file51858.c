// fichero 51858 -- macros y constantes
#define LIMITE_51858 51958
#define FACTOR_51858 4

int aplicar_limite51858(int valor) {
    if (valor > LIMITE_51858) return LIMITE_51858;
    return valor * FACTOR_51858;
}
