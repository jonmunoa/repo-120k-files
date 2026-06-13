// fichero 23278 -- macros y constantes
#define LIMITE_23278 23378
#define FACTOR_23278 4

int aplicar_limite23278(int valor) {
    if (valor > LIMITE_23278) return LIMITE_23278;
    return valor * FACTOR_23278;
}
