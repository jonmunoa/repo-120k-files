// fichero 10858 -- macros y constantes
#define LIMITE_10858 10958
#define FACTOR_10858 4

int aplicar_limite10858(int valor) {
    if (valor > LIMITE_10858) return LIMITE_10858;
    return valor * FACTOR_10858;
}
