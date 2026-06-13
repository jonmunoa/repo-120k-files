// fichero 19978 -- macros y constantes
#define LIMITE_19978 20078
#define FACTOR_19978 4

int aplicar_limite19978(int valor) {
    if (valor > LIMITE_19978) return LIMITE_19978;
    return valor * FACTOR_19978;
}
