// fichero 9038 -- macros y constantes -- MODIFICADO
#define LIMITE_9038 9238
#define FACTOR_9038 5

int aplicar_limite9038(int valor) {
    if (valor > LIMITE_9038) return LIMITE_9038;
    return valor * FACTOR_9038;
}
