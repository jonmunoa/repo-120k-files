// fichero 29422 -- macros y constantes -- MODIFICADO
#define LIMITE_29422 29622
#define FACTOR_29422 4

int aplicar_limite29422(int valor) {
    if (valor > LIMITE_29422) return LIMITE_29422;
    return valor * FACTOR_29422;
}
