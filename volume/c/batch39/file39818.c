// fichero 39818 -- macros y constantes -- MODIFICADO
#define LIMITE_39818 40018
#define FACTOR_39818 5

int aplicar_limite39818(int valor) {
    if (valor > LIMITE_39818) return LIMITE_39818;
    return valor * FACTOR_39818;
}
