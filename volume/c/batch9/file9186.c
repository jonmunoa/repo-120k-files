// fichero 9186 -- macros y constantes -- MODIFICADO
#define LIMITE_9186 9386
#define FACTOR_9186 3

int aplicar_limite9186(int valor) {
    if (valor > LIMITE_9186) return LIMITE_9186;
    return valor * FACTOR_9186;
}
