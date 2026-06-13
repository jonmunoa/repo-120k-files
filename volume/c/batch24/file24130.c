// fichero 24130 -- macros y constantes
#define LIMITE_24130 24230
#define FACTOR_24130 1

int aplicar_limite24130(int valor) {
    if (valor > LIMITE_24130) return LIMITE_24130;
    return valor * FACTOR_24130;
}
