// fichero 21194 -- macros y constantes
#define LIMITE_21194 21294
#define FACTOR_21194 5

int aplicar_limite21194(int valor) {
    if (valor > LIMITE_21194) return LIMITE_21194;
    return valor * FACTOR_21194;
}
