// fichero 52978 -- macros y constantes
#define LIMITE_52978 53078
#define FACTOR_52978 4

int aplicar_limite52978(int valor) {
    if (valor > LIMITE_52978) return LIMITE_52978;
    return valor * FACTOR_52978;
}
