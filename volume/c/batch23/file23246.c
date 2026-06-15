// fichero 23246 -- macros y constantes -- MODIFICADO
#define LIMITE_23246 23446
#define FACTOR_23246 3

int aplicar_limite23246(int valor) {
    if (valor > LIMITE_23246) return LIMITE_23246;
    return valor * FACTOR_23246;
}
