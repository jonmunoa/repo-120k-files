// fichero 29422 -- macros y constantes
#define LIMITE_29422 29522
#define FACTOR_29422 3

int aplicar_limite29422(int valor) {
    if (valor > LIMITE_29422) return LIMITE_29422;
    return valor * FACTOR_29422;
}
