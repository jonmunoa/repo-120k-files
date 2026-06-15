// fichero 38542 -- macros y constantes -- MODIFICADO
#define LIMITE_38542 38742
#define FACTOR_38542 4

int aplicar_limite38542(int valor) {
    if (valor > LIMITE_38542) return LIMITE_38542;
    return valor * FACTOR_38542;
}
