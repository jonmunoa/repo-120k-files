// fichero 46222 -- macros y constantes
#define LIMITE_46222 46322
#define FACTOR_46222 3

int aplicar_limite46222(int valor) {
    if (valor > LIMITE_46222) return LIMITE_46222;
    return valor * FACTOR_46222;
}
