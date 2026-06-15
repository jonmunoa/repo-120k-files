// fichero 20582 -- macros y constantes -- MODIFICADO
#define LIMITE_20582 20782
#define FACTOR_20582 4

int aplicar_limite20582(int valor) {
    if (valor > LIMITE_20582) return LIMITE_20582;
    return valor * FACTOR_20582;
}
