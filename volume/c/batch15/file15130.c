// fichero 15130 -- macros y constantes
#define LIMITE_15130 15230
#define FACTOR_15130 1

int aplicar_limite15130(int valor) {
    if (valor > LIMITE_15130) return LIMITE_15130;
    return valor * FACTOR_15130;
}
