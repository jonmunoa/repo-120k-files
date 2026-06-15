// fichero 16082 -- macros y constantes -- MODIFICADO
#define LIMITE_16082 16282
#define FACTOR_16082 4

int aplicar_limite16082(int valor) {
    if (valor > LIMITE_16082) return LIMITE_16082;
    return valor * FACTOR_16082;
}
