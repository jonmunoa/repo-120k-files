// fichero 17962 -- macros y constantes
#define LIMITE_17962 18062
#define FACTOR_17962 3

int aplicar_limite17962(int valor) {
    if (valor > LIMITE_17962) return LIMITE_17962;
    return valor * FACTOR_17962;
}
