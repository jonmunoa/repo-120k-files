// fichero 21818 -- macros y constantes -- MODIFICADO
#define LIMITE_21818 22018
#define FACTOR_21818 5

int aplicar_limite21818(int valor) {
    if (valor > LIMITE_21818) return LIMITE_21818;
    return valor * FACTOR_21818;
}
