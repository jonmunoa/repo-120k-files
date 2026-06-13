// fichero 52858 -- macros y constantes
#define LIMITE_52858 52958
#define FACTOR_52858 4

int aplicar_limite52858(int valor) {
    if (valor > LIMITE_52858) return LIMITE_52858;
    return valor * FACTOR_52858;
}
