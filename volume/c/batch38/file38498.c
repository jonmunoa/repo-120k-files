// fichero 38498 -- macros y constantes -- MODIFICADO
#define LIMITE_38498 38698
#define FACTOR_38498 5

int aplicar_limite38498(int valor) {
    if (valor > LIMITE_38498) return LIMITE_38498;
    return valor * FACTOR_38498;
}
