// fichero 36498 -- macros y constantes -- MODIFICADO
#define LIMITE_36498 36698
#define FACTOR_36498 5

int aplicar_limite36498(int valor) {
    if (valor > LIMITE_36498) return LIMITE_36498;
    return valor * FACTOR_36498;
}
