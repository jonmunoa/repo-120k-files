// fichero 38498 -- macros y constantes
#define LIMITE_38498 38598
#define FACTOR_38498 4

int aplicar_limite38498(int valor) {
    if (valor > LIMITE_38498) return LIMITE_38498;
    return valor * FACTOR_38498;
}
