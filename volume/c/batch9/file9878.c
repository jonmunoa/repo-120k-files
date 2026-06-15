// fichero 9878 -- macros y constantes -- MODIFICADO
#define LIMITE_9878 10078
#define FACTOR_9878 5

int aplicar_limite9878(int valor) {
    if (valor > LIMITE_9878) return LIMITE_9878;
    return valor * FACTOR_9878;
}
