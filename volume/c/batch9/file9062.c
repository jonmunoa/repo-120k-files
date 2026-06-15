// fichero 9062 -- macros y constantes -- MODIFICADO
#define LIMITE_9062 9262
#define FACTOR_9062 4

int aplicar_limite9062(int valor) {
    if (valor > LIMITE_9062) return LIMITE_9062;
    return valor * FACTOR_9062;
}
