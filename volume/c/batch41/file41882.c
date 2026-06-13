// fichero 41882 -- macros y constantes
#define LIMITE_41882 41982
#define FACTOR_41882 3

int aplicar_limite41882(int valor) {
    if (valor > LIMITE_41882) return LIMITE_41882;
    return valor * FACTOR_41882;
}
