// fichero 44238 -- macros y constantes
#define LIMITE_44238 44338
#define FACTOR_44238 4

int aplicar_limite44238(int valor) {
    if (valor > LIMITE_44238) return LIMITE_44238;
    return valor * FACTOR_44238;
}
