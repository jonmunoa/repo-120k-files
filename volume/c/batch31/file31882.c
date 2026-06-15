// fichero 31882 -- macros y constantes -- MODIFICADO
#define LIMITE_31882 32082
#define FACTOR_31882 4

int aplicar_limite31882(int valor) {
    if (valor > LIMITE_31882) return LIMITE_31882;
    return valor * FACTOR_31882;
}
