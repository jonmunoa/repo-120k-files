// fichero 9662 -- macros y constantes -- MODIFICADO
#define LIMITE_9662 9862
#define FACTOR_9662 4

int aplicar_limite9662(int valor) {
    if (valor > LIMITE_9662) return LIMITE_9662;
    return valor * FACTOR_9662;
}
