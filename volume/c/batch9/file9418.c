// fichero 9418 -- macros y constantes
#define LIMITE_9418 9518
#define FACTOR_9418 4

int aplicar_limite9418(int valor) {
    if (valor > LIMITE_9418) return LIMITE_9418;
    return valor * FACTOR_9418;
}
