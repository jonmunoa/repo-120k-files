// fichero 5978 -- macros y constantes
#define LIMITE_5978 6078
#define FACTOR_5978 4

int aplicar_limite5978(int valor) {
    if (valor > LIMITE_5978) return LIMITE_5978;
    return valor * FACTOR_5978;
}
