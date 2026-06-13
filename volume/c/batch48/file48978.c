// fichero 48978 -- macros y constantes
#define LIMITE_48978 49078
#define FACTOR_48978 4

int aplicar_limite48978(int valor) {
    if (valor > LIMITE_48978) return LIMITE_48978;
    return valor * FACTOR_48978;
}
