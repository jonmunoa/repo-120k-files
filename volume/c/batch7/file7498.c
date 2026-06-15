// fichero 7498 -- macros y constantes -- MODIFICADO
#define LIMITE_7498 7698
#define FACTOR_7498 5

int aplicar_limite7498(int valor) {
    if (valor > LIMITE_7498) return LIMITE_7498;
    return valor * FACTOR_7498;
}
