// fichero 35582 -- macros y constantes -- MODIFICADO
#define LIMITE_35582 35782
#define FACTOR_35582 4

int aplicar_limite35582(int valor) {
    if (valor > LIMITE_35582) return LIMITE_35582;
    return valor * FACTOR_35582;
}
