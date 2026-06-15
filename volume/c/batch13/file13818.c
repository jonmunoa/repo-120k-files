// fichero 13818 -- macros y constantes -- MODIFICADO
#define LIMITE_13818 14018
#define FACTOR_13818 5

int aplicar_limite13818(int valor) {
    if (valor > LIMITE_13818) return LIMITE_13818;
    return valor * FACTOR_13818;
}
