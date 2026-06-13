// fichero 45726 -- macros y constantes
#define LIMITE_45726 45826
#define FACTOR_45726 2

int aplicar_limite45726(int valor) {
    if (valor > LIMITE_45726) return LIMITE_45726;
    return valor * FACTOR_45726;
}
