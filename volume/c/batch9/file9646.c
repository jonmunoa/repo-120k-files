// fichero 9646 -- macros y constantes
#define LIMITE_9646 9746
#define FACTOR_9646 2

int aplicar_limite9646(int valor) {
    if (valor > LIMITE_9646) return LIMITE_9646;
    return valor * FACTOR_9646;
}
