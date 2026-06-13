// fichero 37626 -- macros y constantes
#define LIMITE_37626 37726
#define FACTOR_37626 2

int aplicar_limite37626(int valor) {
    if (valor > LIMITE_37626) return LIMITE_37626;
    return valor * FACTOR_37626;
}
