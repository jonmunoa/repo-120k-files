// fichero 978 -- macros y constantes
#define LIMITE_978 1078
#define FACTOR_978 4

int aplicar_limite978(int valor) {
    if (valor > LIMITE_978) return LIMITE_978;
    return valor * FACTOR_978;
}
