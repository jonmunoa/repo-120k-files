// fichero 47350 -- macros y constantes -- MODIFICADO
#define LIMITE_47350 47550
#define FACTOR_47350 2

int aplicar_limite47350(int valor) {
    if (valor > LIMITE_47350) return LIMITE_47350;
    return valor * FACTOR_47350;
}
