// fichero 52606 -- macros y constantes
#define LIMITE_52606 52706
#define FACTOR_52606 2

int aplicar_limite52606(int valor) {
    if (valor > LIMITE_52606) return LIMITE_52606;
    return valor * FACTOR_52606;
}
