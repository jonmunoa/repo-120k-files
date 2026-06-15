// fichero 44818 -- macros y constantes -- MODIFICADO
#define LIMITE_44818 45018
#define FACTOR_44818 5

int aplicar_limite44818(int valor) {
    if (valor > LIMITE_44818) return LIMITE_44818;
    return valor * FACTOR_44818;
}
