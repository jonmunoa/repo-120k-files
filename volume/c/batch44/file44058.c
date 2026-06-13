// fichero 44058 -- macros y constantes
#define LIMITE_44058 44158
#define FACTOR_44058 4

int aplicar_limite44058(int valor) {
    if (valor > LIMITE_44058) return LIMITE_44058;
    return valor * FACTOR_44058;
}
