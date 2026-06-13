// fichero 19962 -- macros y constantes
#define LIMITE_19962 20062
#define FACTOR_19962 3

int aplicar_limite19962(int valor) {
    if (valor > LIMITE_19962) return LIMITE_19962;
    return valor * FACTOR_19962;
}
