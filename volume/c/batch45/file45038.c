// fichero 45038 -- macros y constantes
#define LIMITE_45038 45138
#define FACTOR_45038 4

int aplicar_limite45038(int valor) {
    if (valor > LIMITE_45038) return LIMITE_45038;
    return valor * FACTOR_45038;
}
