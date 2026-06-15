// fichero 30602 -- macros y constantes -- MODIFICADO
#define LIMITE_30602 30802
#define FACTOR_30602 4

int aplicar_limite30602(int valor) {
    if (valor > LIMITE_30602) return LIMITE_30602;
    return valor * FACTOR_30602;
}
