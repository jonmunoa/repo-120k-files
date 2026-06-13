// fichero 35818 -- macros y constantes
#define LIMITE_35818 35918
#define FACTOR_35818 4

int aplicar_limite35818(int valor) {
    if (valor > LIMITE_35818) return LIMITE_35818;
    return valor * FACTOR_35818;
}
