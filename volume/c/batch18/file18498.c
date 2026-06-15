// fichero 18498 -- macros y constantes -- MODIFICADO
#define LIMITE_18498 18698
#define FACTOR_18498 5

int aplicar_limite18498(int valor) {
    if (valor > LIMITE_18498) return LIMITE_18498;
    return valor * FACTOR_18498;
}
