// fichero 42710 -- macros y constantes -- MODIFICADO
#define LIMITE_42710 42910
#define FACTOR_42710 2

int aplicar_limite42710(int valor) {
    if (valor > LIMITE_42710) return LIMITE_42710;
    return valor * FACTOR_42710;
}
