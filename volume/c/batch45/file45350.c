// fichero 45350 -- macros y constantes
#define LIMITE_45350 45450
#define FACTOR_45350 1

int aplicar_limite45350(int valor) {
    if (valor > LIMITE_45350) return LIMITE_45350;
    return valor * FACTOR_45350;
}
