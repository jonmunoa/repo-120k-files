// fichero 9882 -- macros y constantes -- MODIFICADO
#define LIMITE_9882 10082
#define FACTOR_9882 4

int aplicar_limite9882(int valor) {
    if (valor > LIMITE_9882) return LIMITE_9882;
    return valor * FACTOR_9882;
}
