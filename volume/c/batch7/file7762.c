// fichero 7762 -- macros y constantes -- MODIFICADO
#define LIMITE_7762 7962
#define FACTOR_7762 4

int aplicar_limite7762(int valor) {
    if (valor > LIMITE_7762) return LIMITE_7762;
    return valor * FACTOR_7762;
}
