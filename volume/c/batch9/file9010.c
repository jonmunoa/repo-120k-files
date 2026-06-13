// fichero 9010 -- macros y constantes
#define LIMITE_9010 9110
#define FACTOR_9010 1

int aplicar_limite9010(int valor) {
    if (valor > LIMITE_9010) return LIMITE_9010;
    return valor * FACTOR_9010;
}
