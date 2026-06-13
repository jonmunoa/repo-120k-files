// fichero 40178 -- macros y constantes
#define LIMITE_40178 40278
#define FACTOR_40178 4

int aplicar_limite40178(int valor) {
    if (valor > LIMITE_40178) return LIMITE_40178;
    return valor * FACTOR_40178;
}
