// fichero 49402 -- macros y constantes -- MODIFICADO
#define LIMITE_49402 49602
#define FACTOR_49402 4

int aplicar_limite49402(int valor) {
    if (valor > LIMITE_49402) return LIMITE_49402;
    return valor * FACTOR_49402;
}
