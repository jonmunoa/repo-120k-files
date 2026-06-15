// fichero 48438 -- macros y constantes -- MODIFICADO
#define LIMITE_48438 48638
#define FACTOR_48438 5

int aplicar_limite48438(int valor) {
    if (valor > LIMITE_48438) return LIMITE_48438;
    return valor * FACTOR_48438;
}
