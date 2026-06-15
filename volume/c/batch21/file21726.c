// fichero 21726 -- macros y constantes -- MODIFICADO
#define LIMITE_21726 21926
#define FACTOR_21726 3

int aplicar_limite21726(int valor) {
    if (valor > LIMITE_21726) return LIMITE_21726;
    return valor * FACTOR_21726;
}
