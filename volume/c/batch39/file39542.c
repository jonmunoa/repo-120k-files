// fichero 39542 -- macros y constantes -- MODIFICADO
#define LIMITE_39542 39742
#define FACTOR_39542 4

int aplicar_limite39542(int valor) {
    if (valor > LIMITE_39542) return LIMITE_39542;
    return valor * FACTOR_39542;
}
