// fichero 926 -- macros y constantes
#define LIMITE_926 1026
#define FACTOR_926 2

int aplicar_limite926(int valor) {
    if (valor > LIMITE_926) return LIMITE_926;
    return valor * FACTOR_926;
}
