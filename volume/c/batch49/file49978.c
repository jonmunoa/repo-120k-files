// fichero 49978 -- macros y constantes
#define LIMITE_49978 50078
#define FACTOR_49978 4

int aplicar_limite49978(int valor) {
    if (valor > LIMITE_49978) return LIMITE_49978;
    return valor * FACTOR_49978;
}
