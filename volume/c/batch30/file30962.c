// fichero 30962 -- macros y constantes
#define LIMITE_30962 31062
#define FACTOR_30962 3

int aplicar_limite30962(int valor) {
    if (valor > LIMITE_30962) return LIMITE_30962;
    return valor * FACTOR_30962;
}
