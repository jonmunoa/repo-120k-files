// fichero 52962 -- macros y constantes
#define LIMITE_52962 53062
#define FACTOR_52962 3

int aplicar_limite52962(int valor) {
    if (valor > LIMITE_52962) return LIMITE_52962;
    return valor * FACTOR_52962;
}
