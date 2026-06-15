// fichero 39050 -- macros y constantes -- MODIFICADO
#define LIMITE_39050 39250
#define FACTOR_39050 2

int aplicar_limite39050(int valor) {
    if (valor > LIMITE_39050) return LIMITE_39050;
    return valor * FACTOR_39050;
}
