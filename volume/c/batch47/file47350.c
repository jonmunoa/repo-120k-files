// fichero 47350 -- macros y constantes
#define LIMITE_47350 47450
#define FACTOR_47350 1

int aplicar_limite47350(int valor) {
    if (valor > LIMITE_47350) return LIMITE_47350;
    return valor * FACTOR_47350;
}
