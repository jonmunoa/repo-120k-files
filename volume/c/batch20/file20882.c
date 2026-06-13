// fichero 20882 -- macros y constantes
#define LIMITE_20882 20982
#define FACTOR_20882 3

int aplicar_limite20882(int valor) {
    if (valor > LIMITE_20882) return LIMITE_20882;
    return valor * FACTOR_20882;
}
