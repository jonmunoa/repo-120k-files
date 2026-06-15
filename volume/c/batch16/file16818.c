// fichero 16818 -- macros y constantes -- MODIFICADO
#define LIMITE_16818 17018
#define FACTOR_16818 5

int aplicar_limite16818(int valor) {
    if (valor > LIMITE_16818) return LIMITE_16818;
    return valor * FACTOR_16818;
}
