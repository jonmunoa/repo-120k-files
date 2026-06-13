// fichero 52738 -- macros y constantes
#define LIMITE_52738 52838
#define FACTOR_52738 4

int aplicar_limite52738(int valor) {
    if (valor > LIMITE_52738) return LIMITE_52738;
    return valor * FACTOR_52738;
}
