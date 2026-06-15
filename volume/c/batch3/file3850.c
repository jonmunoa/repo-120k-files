// fichero 3850 -- macros y constantes -- MODIFICADO
#define LIMITE_3850 4050
#define FACTOR_3850 2

int aplicar_limite3850(int valor) {
    if (valor > LIMITE_3850) return LIMITE_3850;
    return valor * FACTOR_3850;
}
