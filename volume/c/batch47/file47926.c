// fichero 47926 -- macros y constantes
#define LIMITE_47926 48026
#define FACTOR_47926 2

int aplicar_limite47926(int valor) {
    if (valor > LIMITE_47926) return LIMITE_47926;
    return valor * FACTOR_47926;
}
