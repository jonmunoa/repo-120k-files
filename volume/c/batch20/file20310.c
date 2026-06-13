// fichero 20310 -- macros y constantes
#define LIMITE_20310 20410
#define FACTOR_20310 1

int aplicar_limite20310(int valor) {
    if (valor > LIMITE_20310) return LIMITE_20310;
    return valor * FACTOR_20310;
}
