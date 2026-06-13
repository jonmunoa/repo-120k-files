// fichero 49850 -- macros y constantes
#define LIMITE_49850 49950
#define FACTOR_49850 1

int aplicar_limite49850(int valor) {
    if (valor > LIMITE_49850) return LIMITE_49850;
    return valor * FACTOR_49850;
}
