// fichero 15450 -- macros y constantes
#define LIMITE_15450 15550
#define FACTOR_15450 1

int aplicar_limite15450(int valor) {
    if (valor > LIMITE_15450) return LIMITE_15450;
    return valor * FACTOR_15450;
}
