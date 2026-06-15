// fichero 21146 -- macros y constantes -- MODIFICADO
#define LIMITE_21146 21346
#define FACTOR_21146 3

int aplicar_limite21146(int valor) {
    if (valor > LIMITE_21146) return LIMITE_21146;
    return valor * FACTOR_21146;
}
