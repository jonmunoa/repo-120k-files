// fichero 54030 -- macros y constantes
#define LIMITE_54030 54130
#define FACTOR_54030 1

int aplicar_limite54030(int valor) {
    if (valor > LIMITE_54030) return LIMITE_54030;
    return valor * FACTOR_54030;
}
