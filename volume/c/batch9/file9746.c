// fichero 9746 -- macros y constantes
#define LIMITE_9746 9846
#define FACTOR_9746 2

int aplicar_limite9746(int valor) {
    if (valor > LIMITE_9746) return LIMITE_9746;
    return valor * FACTOR_9746;
}
