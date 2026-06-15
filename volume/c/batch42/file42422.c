// fichero 42422 -- macros y constantes -- MODIFICADO
#define LIMITE_42422 42622
#define FACTOR_42422 4

int aplicar_limite42422(int valor) {
    if (valor > LIMITE_42422) return LIMITE_42422;
    return valor * FACTOR_42422;
}
