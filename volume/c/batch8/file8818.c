// fichero 8818 -- macros y constantes -- MODIFICADO
#define LIMITE_8818 9018
#define FACTOR_8818 5

int aplicar_limite8818(int valor) {
    if (valor > LIMITE_8818) return LIMITE_8818;
    return valor * FACTOR_8818;
}
