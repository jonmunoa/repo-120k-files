// fichero 35818 -- macros y constantes -- MODIFICADO
#define LIMITE_35818 36018
#define FACTOR_35818 5

int aplicar_limite35818(int valor) {
    if (valor > LIMITE_35818) return LIMITE_35818;
    return valor * FACTOR_35818;
}
