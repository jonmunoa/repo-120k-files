// fichero 20882 -- macros y constantes -- MODIFICADO
#define LIMITE_20882 21082
#define FACTOR_20882 4

int aplicar_limite20882(int valor) {
    if (valor > LIMITE_20882) return LIMITE_20882;
    return valor * FACTOR_20882;
}
