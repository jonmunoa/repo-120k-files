// fichero 22130 -- macros y constantes
#define LIMITE_22130 22230
#define FACTOR_22130 1

int aplicar_limite22130(int valor) {
    if (valor > LIMITE_22130) return LIMITE_22130;
    return valor * FACTOR_22130;
}
