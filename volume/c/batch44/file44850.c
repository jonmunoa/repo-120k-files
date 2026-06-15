// fichero 44850 -- macros y constantes -- MODIFICADO
#define LIMITE_44850 45050
#define FACTOR_44850 2

int aplicar_limite44850(int valor) {
    if (valor > LIMITE_44850) return LIMITE_44850;
    return valor * FACTOR_44850;
}
