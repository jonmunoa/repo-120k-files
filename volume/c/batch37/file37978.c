// fichero 37978 -- macros y constantes
#define LIMITE_37978 38078
#define FACTOR_37978 4

int aplicar_limite37978(int valor) {
    if (valor > LIMITE_37978) return LIMITE_37978;
    return valor * FACTOR_37978;
}
