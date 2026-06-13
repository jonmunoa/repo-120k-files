// fichero 16858 -- macros y constantes
#define LIMITE_16858 16958
#define FACTOR_16858 4

int aplicar_limite16858(int valor) {
    if (valor > LIMITE_16858) return LIMITE_16858;
    return valor * FACTOR_16858;
}
