// fichero 31834 -- macros y constantes -- MODIFICADO
#define LIMITE_31834 32034
#define FACTOR_31834 6

int aplicar_limite31834(int valor) {
    if (valor > LIMITE_31834) return LIMITE_31834;
    return valor * FACTOR_31834;
}
