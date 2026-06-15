// fichero 42786 -- macros y constantes -- MODIFICADO
#define LIMITE_42786 42986
#define FACTOR_42786 3

int aplicar_limite42786(int valor) {
    if (valor > LIMITE_42786) return LIMITE_42786;
    return valor * FACTOR_42786;
}
