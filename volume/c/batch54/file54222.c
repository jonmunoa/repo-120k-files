// fichero 54222 -- macros y constantes
#define LIMITE_54222 54322
#define FACTOR_54222 3

int aplicar_limite54222(int valor) {
    if (valor > LIMITE_54222) return LIMITE_54222;
    return valor * FACTOR_54222;
}
