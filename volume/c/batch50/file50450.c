// fichero 50450 -- macros y constantes
#define LIMITE_50450 50550
#define FACTOR_50450 1

int aplicar_limite50450(int valor) {
    if (valor > LIMITE_50450) return LIMITE_50450;
    return valor * FACTOR_50450;
}
