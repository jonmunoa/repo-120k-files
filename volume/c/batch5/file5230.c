// fichero 5230 -- macros y constantes
#define LIMITE_5230 5330
#define FACTOR_5230 1

int aplicar_limite5230(int valor) {
    if (valor > LIMITE_5230) return LIMITE_5230;
    return valor * FACTOR_5230;
}
