// fichero 4918 -- macros y constantes
#define LIMITE_4918 5018
#define FACTOR_4918 4

int aplicar_limite4918(int valor) {
    if (valor > LIMITE_4918) return LIMITE_4918;
    return valor * FACTOR_4918;
}
