// fichero 19118 -- macros y constantes
#define LIMITE_19118 19218
#define FACTOR_19118 4

int aplicar_limite19118(int valor) {
    if (valor > LIMITE_19118) return LIMITE_19118;
    return valor * FACTOR_19118;
}
