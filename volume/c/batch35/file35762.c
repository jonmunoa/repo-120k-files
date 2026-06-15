// fichero 35762 -- macros y constantes -- MODIFICADO
#define LIMITE_35762 35962
#define FACTOR_35762 4

int aplicar_limite35762(int valor) {
    if (valor > LIMITE_35762) return LIMITE_35762;
    return valor * FACTOR_35762;
}
