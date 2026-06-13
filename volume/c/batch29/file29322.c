// fichero 29322 -- macros y constantes
#define LIMITE_29322 29422
#define FACTOR_29322 3

int aplicar_limite29322(int valor) {
    if (valor > LIMITE_29322) return LIMITE_29322;
    return valor * FACTOR_29322;
}
