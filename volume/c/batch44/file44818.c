// fichero 44818 -- macros y constantes
#define LIMITE_44818 44918
#define FACTOR_44818 4

int aplicar_limite44818(int valor) {
    if (valor > LIMITE_44818) return LIMITE_44818;
    return valor * FACTOR_44818;
}
