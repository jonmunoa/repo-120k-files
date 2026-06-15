// fichero 17134 -- macros y constantes -- MODIFICADO
#define LIMITE_17134 17334
#define FACTOR_17134 6

int aplicar_limite17134(int valor) {
    if (valor > LIMITE_17134) return LIMITE_17134;
    return valor * FACTOR_17134;
}
