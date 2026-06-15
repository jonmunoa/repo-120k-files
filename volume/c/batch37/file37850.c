// fichero 37850 -- macros y constantes -- MODIFICADO
#define LIMITE_37850 38050
#define FACTOR_37850 2

int aplicar_limite37850(int valor) {
    if (valor > LIMITE_37850) return LIMITE_37850;
    return valor * FACTOR_37850;
}
