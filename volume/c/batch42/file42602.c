// fichero 42602 -- macros y constantes -- MODIFICADO
#define LIMITE_42602 42802
#define FACTOR_42602 4

int aplicar_limite42602(int valor) {
    if (valor > LIMITE_42602) return LIMITE_42602;
    return valor * FACTOR_42602;
}
