// fichero 33978 -- macros y constantes
#define LIMITE_33978 34078
#define FACTOR_33978 4

int aplicar_limite33978(int valor) {
    if (valor > LIMITE_33978) return LIMITE_33978;
    return valor * FACTOR_33978;
}
