// fichero 51926 -- macros y constantes
#define LIMITE_51926 52026
#define FACTOR_51926 2

int aplicar_limite51926(int valor) {
    if (valor > LIMITE_51926) return LIMITE_51926;
    return valor * FACTOR_51926;
}
