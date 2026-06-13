// fichero 35962 -- macros y constantes
#define LIMITE_35962 36062
#define FACTOR_35962 3

int aplicar_limite35962(int valor) {
    if (valor > LIMITE_35962) return LIMITE_35962;
    return valor * FACTOR_35962;
}
