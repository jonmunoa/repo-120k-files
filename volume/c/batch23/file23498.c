// fichero 23498 -- macros y constantes -- MODIFICADO
#define LIMITE_23498 23698
#define FACTOR_23498 5

int aplicar_limite23498(int valor) {
    if (valor > LIMITE_23498) return LIMITE_23498;
    return valor * FACTOR_23498;
}
