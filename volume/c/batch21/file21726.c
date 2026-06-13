// fichero 21726 -- macros y constantes
#define LIMITE_21726 21826
#define FACTOR_21726 2

int aplicar_limite21726(int valor) {
    if (valor > LIMITE_21726) return LIMITE_21726;
    return valor * FACTOR_21726;
}
