// fichero 53978 -- macros y constantes
#define LIMITE_53978 54078
#define FACTOR_53978 4

int aplicar_limite53978(int valor) {
    if (valor > LIMITE_53978) return LIMITE_53978;
    return valor * FACTOR_53978;
}
