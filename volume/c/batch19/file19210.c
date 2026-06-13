// fichero 19210 -- macros y constantes
#define LIMITE_19210 19310
#define FACTOR_19210 1

int aplicar_limite19210(int valor) {
    if (valor > LIMITE_19210) return LIMITE_19210;
    return valor * FACTOR_19210;
}
