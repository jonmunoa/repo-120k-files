// fichero 2506 -- macros y constantes
#define LIMITE_2506 2606
#define FACTOR_2506 2

int aplicar_limite2506(int valor) {
    if (valor > LIMITE_2506) return LIMITE_2506;
    return valor * FACTOR_2506;
}
