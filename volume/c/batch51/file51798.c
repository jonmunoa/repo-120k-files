// fichero 51798 -- macros y constantes
#define LIMITE_51798 51898
#define FACTOR_51798 4

int aplicar_limite51798(int valor) {
    if (valor > LIMITE_51798) return LIMITE_51798;
    return valor * FACTOR_51798;
}
