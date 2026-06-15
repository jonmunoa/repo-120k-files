// fichero 23542 -- macros y constantes -- MODIFICADO
#define LIMITE_23542 23742
#define FACTOR_23542 4

int aplicar_limite23542(int valor) {
    if (valor > LIMITE_23542) return LIMITE_23542;
    return valor * FACTOR_23542;
}
