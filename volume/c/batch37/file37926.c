// fichero 37926 -- macros y constantes
#define LIMITE_37926 38026
#define FACTOR_37926 2

int aplicar_limite37926(int valor) {
    if (valor > LIMITE_37926) return LIMITE_37926;
    return valor * FACTOR_37926;
}
