// fichero 40130 -- macros y constantes
#define LIMITE_40130 40230
#define FACTOR_40130 1

int aplicar_limite40130(int valor) {
    if (valor > LIMITE_40130) return LIMITE_40130;
    return valor * FACTOR_40130;
}
