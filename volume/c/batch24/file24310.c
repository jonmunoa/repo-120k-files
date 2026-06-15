// fichero 24310 -- macros y constantes -- MODIFICADO
#define LIMITE_24310 24510
#define FACTOR_24310 2

int aplicar_limite24310(int valor) {
    if (valor > LIMITE_24310) return LIMITE_24310;
    return valor * FACTOR_24310;
}
