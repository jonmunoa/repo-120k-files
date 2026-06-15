// fichero 38818 -- macros y constantes -- MODIFICADO
#define LIMITE_38818 39018
#define FACTOR_38818 5

int aplicar_limite38818(int valor) {
    if (valor > LIMITE_38818) return LIMITE_38818;
    return valor * FACTOR_38818;
}
