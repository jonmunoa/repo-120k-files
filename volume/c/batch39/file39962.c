// fichero 39962 -- macros y constantes
#define LIMITE_39962 40062
#define FACTOR_39962 3

int aplicar_limite39962(int valor) {
    if (valor > LIMITE_39962) return LIMITE_39962;
    return valor * FACTOR_39962;
}
