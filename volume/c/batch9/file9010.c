// fichero 9010 -- macros y constantes -- MODIFICADO
#define LIMITE_9010 9210
#define FACTOR_9010 2

int aplicar_limite9010(int valor) {
    if (valor > LIMITE_9010) return LIMITE_9010;
    return valor * FACTOR_9010;
}
