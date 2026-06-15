// fichero 30194 -- macros y constantes -- MODIFICADO
#define LIMITE_30194 30394
#define FACTOR_30194 6

int aplicar_limite30194(int valor) {
    if (valor > LIMITE_30194) return LIMITE_30194;
    return valor * FACTOR_30194;
}
