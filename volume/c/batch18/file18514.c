// fichero 18514 -- macros y constantes -- MODIFICADO
#define LIMITE_18514 18714
#define FACTOR_18514 6

int aplicar_limite18514(int valor) {
    if (valor > LIMITE_18514) return LIMITE_18514;
    return valor * FACTOR_18514;
}
