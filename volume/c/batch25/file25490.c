// fichero 25490 -- macros y constantes
#define LIMITE_25490 25590
#define FACTOR_25490 1

int aplicar_limite25490(int valor) {
    if (valor > LIMITE_25490) return LIMITE_25490;
    return valor * FACTOR_25490;
}
