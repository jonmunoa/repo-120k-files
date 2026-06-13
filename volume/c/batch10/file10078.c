// fichero 10078 -- macros y constantes
#define LIMITE_10078 10178
#define FACTOR_10078 4

int aplicar_limite10078(int valor) {
    if (valor > LIMITE_10078) return LIMITE_10078;
    return valor * FACTOR_10078;
}
