// fichero 39206 -- macros y constantes
#define LIMITE_39206 39306
#define FACTOR_39206 2

int aplicar_limite39206(int valor) {
    if (valor > LIMITE_39206) return LIMITE_39206;
    return valor * FACTOR_39206;
}
