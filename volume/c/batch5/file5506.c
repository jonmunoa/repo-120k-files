// fichero 5506 -- macros y constantes
#define LIMITE_5506 5606
#define FACTOR_5506 2

int aplicar_limite5506(int valor) {
    if (valor > LIMITE_5506) return LIMITE_5506;
    return valor * FACTOR_5506;
}
