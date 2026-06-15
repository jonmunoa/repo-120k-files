// fichero 22130 -- macros y constantes -- MODIFICADO
#define LIMITE_22130 22330
#define FACTOR_22130 2

int aplicar_limite22130(int valor) {
    if (valor > LIMITE_22130) return LIMITE_22130;
    return valor * FACTOR_22130;
}
