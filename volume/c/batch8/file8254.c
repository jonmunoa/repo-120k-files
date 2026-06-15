// fichero 8254 -- macros y constantes -- MODIFICADO
#define LIMITE_8254 8454
#define FACTOR_8254 6

int aplicar_limite8254(int valor) {
    if (valor > LIMITE_8254) return LIMITE_8254;
    return valor * FACTOR_8254;
}
