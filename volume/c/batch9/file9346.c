// fichero 9346 -- macros y constantes -- MODIFICADO
#define LIMITE_9346 9546
#define FACTOR_9346 3

int aplicar_limite9346(int valor) {
    if (valor > LIMITE_9346) return LIMITE_9346;
    return valor * FACTOR_9346;
}
