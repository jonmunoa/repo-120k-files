// fichero 13562 -- macros y constantes -- MODIFICADO
#define LIMITE_13562 13762
#define FACTOR_13562 4

int aplicar_limite13562(int valor) {
    if (valor > LIMITE_13562) return LIMITE_13562;
    return valor * FACTOR_13562;
}
