// fichero 20962 -- macros y constantes
#define LIMITE_20962 21062
#define FACTOR_20962 3

int aplicar_limite20962(int valor) {
    if (valor > LIMITE_20962) return LIMITE_20962;
    return valor * FACTOR_20962;
}
