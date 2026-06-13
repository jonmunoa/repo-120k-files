// fichero 35758 -- macros y constantes
#define LIMITE_35758 35858
#define FACTOR_35758 4

int aplicar_limite35758(int valor) {
    if (valor > LIMITE_35758) return LIMITE_35758;
    return valor * FACTOR_35758;
}
