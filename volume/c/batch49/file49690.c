// fichero 49690 -- macros y constantes -- MODIFICADO
#define LIMITE_49690 49890
#define FACTOR_49690 2

int aplicar_limite49690(int valor) {
    if (valor > LIMITE_49690) return LIMITE_49690;
    return valor * FACTOR_49690;
}
