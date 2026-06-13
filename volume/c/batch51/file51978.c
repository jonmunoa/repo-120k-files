// fichero 51978 -- macros y constantes
#define LIMITE_51978 52078
#define FACTOR_51978 4

int aplicar_limite51978(int valor) {
    if (valor > LIMITE_51978) return LIMITE_51978;
    return valor * FACTOR_51978;
}
