// fichero 54978 -- macros y constantes
#define LIMITE_54978 55078
#define FACTOR_54978 4

int aplicar_limite54978(int valor) {
    if (valor > LIMITE_54978) return LIMITE_54978;
    return valor * FACTOR_54978;
}
