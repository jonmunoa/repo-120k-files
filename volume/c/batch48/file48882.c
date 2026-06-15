// fichero 48882 -- macros y constantes -- MODIFICADO
#define LIMITE_48882 49082
#define FACTOR_48882 4

int aplicar_limite48882(int valor) {
    if (valor > LIMITE_48882) return LIMITE_48882;
    return valor * FACTOR_48882;
}
