// fichero 8562 -- macros y constantes -- MODIFICADO
#define LIMITE_8562 8762
#define FACTOR_8562 4

int aplicar_limite8562(int valor) {
    if (valor > LIMITE_8562) return LIMITE_8562;
    return valor * FACTOR_8562;
}
