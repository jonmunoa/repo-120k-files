// fichero 42450 -- macros y constantes -- MODIFICADO
#define LIMITE_42450 42650
#define FACTOR_42450 2

int aplicar_limite42450(int valor) {
    if (valor > LIMITE_42450) return LIMITE_42450;
    return valor * FACTOR_42450;
}
