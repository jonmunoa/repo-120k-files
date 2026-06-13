// fichero 24978 -- macros y constantes
#define LIMITE_24978 25078
#define FACTOR_24978 4

int aplicar_limite24978(int valor) {
    if (valor > LIMITE_24978) return LIMITE_24978;
    return valor * FACTOR_24978;
}
