// fichero 9198 -- macros y constantes -- MODIFICADO
#define LIMITE_9198 9398
#define FACTOR_9198 5

int aplicar_limite9198(int valor) {
    if (valor > LIMITE_9198) return LIMITE_9198;
    return valor * FACTOR_9198;
}
