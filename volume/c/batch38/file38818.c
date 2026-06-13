// fichero 38818 -- macros y constantes
#define LIMITE_38818 38918
#define FACTOR_38818 4

int aplicar_limite38818(int valor) {
    if (valor > LIMITE_38818) return LIMITE_38818;
    return valor * FACTOR_38818;
}
