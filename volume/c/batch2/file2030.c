// fichero 2030 -- macros y constantes
#define LIMITE_2030 2130
#define FACTOR_2030 1

int aplicar_limite2030(int valor) {
    if (valor > LIMITE_2030) return LIMITE_2030;
    return valor * FACTOR_2030;
}
