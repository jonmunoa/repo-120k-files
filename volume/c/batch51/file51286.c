// fichero 51286 -- macros y constantes
#define LIMITE_51286 51386
#define FACTOR_51286 2

int aplicar_limite51286(int valor) {
    if (valor > LIMITE_51286) return LIMITE_51286;
    return valor * FACTOR_51286;
}
