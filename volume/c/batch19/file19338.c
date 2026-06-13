// fichero 19338 -- macros y constantes
#define LIMITE_19338 19438
#define FACTOR_19338 4

int aplicar_limite19338(int valor) {
    if (valor > LIMITE_19338) return LIMITE_19338;
    return valor * FACTOR_19338;
}
