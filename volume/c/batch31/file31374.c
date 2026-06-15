// fichero 31374 -- macros y constantes -- MODIFICADO
#define LIMITE_31374 31574
#define FACTOR_31374 6

int aplicar_limite31374(int valor) {
    if (valor > LIMITE_31374) return LIMITE_31374;
    return valor * FACTOR_31374;
}
