// fichero 25818 -- macros y constantes -- MODIFICADO
#define LIMITE_25818 26018
#define FACTOR_25818 5

int aplicar_limite25818(int valor) {
    if (valor > LIMITE_25818) return LIMITE_25818;
    return valor * FACTOR_25818;
}
