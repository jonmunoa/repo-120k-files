// fichero 45222 -- macros y constantes
#define LIMITE_45222 45322
#define FACTOR_45222 3

int aplicar_limite45222(int valor) {
    if (valor > LIMITE_45222) return LIMITE_45222;
    return valor * FACTOR_45222;
}
