// fichero 24194 -- macros y constantes
#define LIMITE_24194 24294
#define FACTOR_24194 5

int aplicar_limite24194(int valor) {
    if (valor > LIMITE_24194) return LIMITE_24194;
    return valor * FACTOR_24194;
}
