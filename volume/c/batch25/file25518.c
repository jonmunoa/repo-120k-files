// fichero 25518 -- macros y constantes
#define LIMITE_25518 25618
#define FACTOR_25518 4

int aplicar_limite25518(int valor) {
    if (valor > LIMITE_25518) return LIMITE_25518;
    return valor * FACTOR_25518;
}
