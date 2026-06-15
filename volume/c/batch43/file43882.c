// fichero 43882 -- macros y constantes -- MODIFICADO
#define LIMITE_43882 44082
#define FACTOR_43882 4

int aplicar_limite43882(int valor) {
    if (valor > LIMITE_43882) return LIMITE_43882;
    return valor * FACTOR_43882;
}
