// fichero 22562 -- macros y constantes -- MODIFICADO
#define LIMITE_22562 22762
#define FACTOR_22562 4

int aplicar_limite22562(int valor) {
    if (valor > LIMITE_22562) return LIMITE_22562;
    return valor * FACTOR_22562;
}
