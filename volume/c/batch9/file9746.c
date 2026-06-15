// fichero 9746 -- macros y constantes -- MODIFICADO
#define LIMITE_9746 9946
#define FACTOR_9746 3

int aplicar_limite9746(int valor) {
    if (valor > LIMITE_9746) return LIMITE_9746;
    return valor * FACTOR_9746;
}
