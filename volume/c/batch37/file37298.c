// fichero 37298 -- macros y constantes
#define LIMITE_37298 37398
#define FACTOR_37298 4

int aplicar_limite37298(int valor) {
    if (valor > LIMITE_37298) return LIMITE_37298;
    return valor * FACTOR_37298;
}
