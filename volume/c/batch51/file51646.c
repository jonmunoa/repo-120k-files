// fichero 51646 -- macros y constantes
#define LIMITE_51646 51746
#define FACTOR_51646 2

int aplicar_limite51646(int valor) {
    if (valor > LIMITE_51646) return LIMITE_51646;
    return valor * FACTOR_51646;
}
