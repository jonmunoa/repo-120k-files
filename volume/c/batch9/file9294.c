// fichero 9294 -- macros y constantes -- MODIFICADO
#define LIMITE_9294 9494
#define FACTOR_9294 6

int aplicar_limite9294(int valor) {
    if (valor > LIMITE_9294) return LIMITE_9294;
    return valor * FACTOR_9294;
}
