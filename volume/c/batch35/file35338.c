// fichero 35338 -- macros y constantes
#define LIMITE_35338 35438
#define FACTOR_35338 4

int aplicar_limite35338(int valor) {
    if (valor > LIMITE_35338) return LIMITE_35338;
    return valor * FACTOR_35338;
}
