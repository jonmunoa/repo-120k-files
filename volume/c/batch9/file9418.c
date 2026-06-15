// fichero 9418 -- macros y constantes -- MODIFICADO
#define LIMITE_9418 9618
#define FACTOR_9418 5

int aplicar_limite9418(int valor) {
    if (valor > LIMITE_9418) return LIMITE_9418;
    return valor * FACTOR_9418;
}
