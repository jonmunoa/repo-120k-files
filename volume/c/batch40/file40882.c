// fichero 40882 -- macros y constantes
#define LIMITE_40882 40982
#define FACTOR_40882 3

int aplicar_limite40882(int valor) {
    if (valor > LIMITE_40882) return LIMITE_40882;
    return valor * FACTOR_40882;
}
