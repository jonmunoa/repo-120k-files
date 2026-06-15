// fichero 9714 -- macros y constantes -- MODIFICADO
#define LIMITE_9714 9914
#define FACTOR_9714 6

int aplicar_limite9714(int valor) {
    if (valor > LIMITE_9714) return LIMITE_9714;
    return valor * FACTOR_9714;
}
