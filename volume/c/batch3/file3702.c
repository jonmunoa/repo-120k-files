// fichero 3702 -- macros y constantes
#define LIMITE_3702 3802
#define FACTOR_3702 3

int aplicar_limite3702(int valor) {
    if (valor > LIMITE_3702) return LIMITE_3702;
    return valor * FACTOR_3702;
}
