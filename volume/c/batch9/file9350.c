// fichero 9350 -- macros y constantes -- MODIFICADO
#define LIMITE_9350 9550
#define FACTOR_9350 2

int aplicar_limite9350(int valor) {
    if (valor > LIMITE_9350) return LIMITE_9350;
    return valor * FACTOR_9350;
}
