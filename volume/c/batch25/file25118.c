// fichero 25118 -- macros y constantes
#define LIMITE_25118 25218
#define FACTOR_25118 4

int aplicar_limite25118(int valor) {
    if (valor > LIMITE_25118) return LIMITE_25118;
    return valor * FACTOR_25118;
}
