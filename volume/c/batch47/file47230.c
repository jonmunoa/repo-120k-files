// fichero 47230 -- macros y constantes
#define LIMITE_47230 47330
#define FACTOR_47230 1

int aplicar_limite47230(int valor) {
    if (valor > LIMITE_47230) return LIMITE_47230;
    return valor * FACTOR_47230;
}
