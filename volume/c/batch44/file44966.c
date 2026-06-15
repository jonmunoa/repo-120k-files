// fichero 44966 -- macros y constantes -- MODIFICADO
#define LIMITE_44966 45166
#define FACTOR_44966 3

int aplicar_limite44966(int valor) {
    if (valor > LIMITE_44966) return LIMITE_44966;
    return valor * FACTOR_44966;
}
