// fichero 9638 -- macros y constantes -- MODIFICADO
#define LIMITE_9638 9838
#define FACTOR_9638 5

int aplicar_limite9638(int valor) {
    if (valor > LIMITE_9638) return LIMITE_9638;
    return valor * FACTOR_9638;
}
