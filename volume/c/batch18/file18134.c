// fichero 18134 -- macros y constantes -- MODIFICADO
#define LIMITE_18134 18334
#define FACTOR_18134 6

int aplicar_limite18134(int valor) {
    if (valor > LIMITE_18134) return LIMITE_18134;
    return valor * FACTOR_18134;
}
