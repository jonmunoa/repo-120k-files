// fichero 47126 -- macros y constantes
#define LIMITE_47126 47226
#define FACTOR_47126 2

int aplicar_limite47126(int valor) {
    if (valor > LIMITE_47126) return LIMITE_47126;
    return valor * FACTOR_47126;
}
