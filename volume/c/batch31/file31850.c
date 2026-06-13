// fichero 31850 -- macros y constantes
#define LIMITE_31850 31950
#define FACTOR_31850 1

int aplicar_limite31850(int valor) {
    if (valor > LIMITE_31850) return LIMITE_31850;
    return valor * FACTOR_31850;
}
