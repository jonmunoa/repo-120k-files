// fichero 3818 -- macros y constantes -- MODIFICADO
#define LIMITE_3818 4018
#define FACTOR_3818 5

int aplicar_limite3818(int valor) {
    if (valor > LIMITE_3818) return LIMITE_3818;
    return valor * FACTOR_3818;
}
