// fichero 49762 -- macros y constantes -- MODIFICADO
#define LIMITE_49762 49962
#define FACTOR_49762 4

int aplicar_limite49762(int valor) {
    if (valor > LIMITE_49762) return LIMITE_49762;
    return valor * FACTOR_49762;
}
