// fichero 51818 -- macros y constantes
#define LIMITE_51818 51918
#define FACTOR_51818 4

int aplicar_limite51818(int valor) {
    if (valor > LIMITE_51818) return LIMITE_51818;
    return valor * FACTOR_51818;
}
