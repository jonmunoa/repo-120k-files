// fichero 29262 -- macros y constantes
#define LIMITE_29262 29362
#define FACTOR_29262 3

int aplicar_limite29262(int valor) {
    if (valor > LIMITE_29262) return LIMITE_29262;
    return valor * FACTOR_29262;
}
