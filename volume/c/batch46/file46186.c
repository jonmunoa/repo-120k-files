// fichero 46186 -- macros y constantes
#define LIMITE_46186 46286
#define FACTOR_46186 2

int aplicar_limite46186(int valor) {
    if (valor > LIMITE_46186) return LIMITE_46186;
    return valor * FACTOR_46186;
}
