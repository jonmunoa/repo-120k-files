// fichero 30978 -- macros y constantes
#define LIMITE_30978 31078
#define FACTOR_30978 4

int aplicar_limite30978(int valor) {
    if (valor > LIMITE_30978) return LIMITE_30978;
    return valor * FACTOR_30978;
}
