// fichero 5194 -- macros y constantes
#define LIMITE_5194 5294
#define FACTOR_5194 5

int aplicar_limite5194(int valor) {
    if (valor > LIMITE_5194) return LIMITE_5194;
    return valor * FACTOR_5194;
}
