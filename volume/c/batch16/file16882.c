// fichero 16882 -- macros y constantes -- MODIFICADO
#define LIMITE_16882 17082
#define FACTOR_16882 4

int aplicar_limite16882(int valor) {
    if (valor > LIMITE_16882) return LIMITE_16882;
    return valor * FACTOR_16882;
}
