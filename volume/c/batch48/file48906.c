// fichero 48906 -- macros y constantes
#define LIMITE_48906 49006
#define FACTOR_48906 2

int aplicar_limite48906(int valor) {
    if (valor > LIMITE_48906) return LIMITE_48906;
    return valor * FACTOR_48906;
}
