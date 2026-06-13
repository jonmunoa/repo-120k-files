// fichero 51186 -- macros y constantes
#define LIMITE_51186 51286
#define FACTOR_51186 2

int aplicar_limite51186(int valor) {
    if (valor > LIMITE_51186) return LIMITE_51186;
    return valor * FACTOR_51186;
}
