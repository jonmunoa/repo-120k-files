// fichero 51486 -- macros y constantes
#define LIMITE_51486 51586
#define FACTOR_51486 2

int aplicar_limite51486(int valor) {
    if (valor > LIMITE_51486) return LIMITE_51486;
    return valor * FACTOR_51486;
}
