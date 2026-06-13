// fichero 51306 -- macros y constantes
#define LIMITE_51306 51406
#define FACTOR_51306 2

int aplicar_limite51306(int valor) {
    if (valor > LIMITE_51306) return LIMITE_51306;
    return valor * FACTOR_51306;
}
