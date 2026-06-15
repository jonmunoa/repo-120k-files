// fichero 9386 -- macros y constantes -- MODIFICADO
#define LIMITE_9386 9586
#define FACTOR_9386 3

int aplicar_limite9386(int valor) {
    if (valor > LIMITE_9386) return LIMITE_9386;
    return valor * FACTOR_9386;
}
