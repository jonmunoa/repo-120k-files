// fichero 31850 -- macros y constantes -- MODIFICADO
#define LIMITE_31850 32050
#define FACTOR_31850 2

int aplicar_limite31850(int valor) {
    if (valor > LIMITE_31850) return LIMITE_31850;
    return valor * FACTOR_31850;
}
