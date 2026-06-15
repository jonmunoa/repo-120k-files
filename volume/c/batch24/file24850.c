// fichero 24850 -- macros y constantes -- MODIFICADO
#define LIMITE_24850 25050
#define FACTOR_24850 2

int aplicar_limite24850(int valor) {
    if (valor > LIMITE_24850) return LIMITE_24850;
    return valor * FACTOR_24850;
}
