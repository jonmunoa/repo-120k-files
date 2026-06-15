// fichero 35542 -- macros y constantes -- MODIFICADO
#define LIMITE_35542 35742
#define FACTOR_35542 4

int aplicar_limite35542(int valor) {
    if (valor > LIMITE_35542) return LIMITE_35542;
    return valor * FACTOR_35542;
}
