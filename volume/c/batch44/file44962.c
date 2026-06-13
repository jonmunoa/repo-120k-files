// fichero 44962 -- macros y constantes
#define LIMITE_44962 45062
#define FACTOR_44962 3

int aplicar_limite44962(int valor) {
    if (valor > LIMITE_44962) return LIMITE_44962;
    return valor * FACTOR_44962;
}
