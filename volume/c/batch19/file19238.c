// fichero 19238 -- macros y constantes
#define LIMITE_19238 19338
#define FACTOR_19238 4

int aplicar_limite19238(int valor) {
    if (valor > LIMITE_19238) return LIMITE_19238;
    return valor * FACTOR_19238;
}
