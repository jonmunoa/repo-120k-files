// fichero 42302 -- macros y constantes -- MODIFICADO
#define LIMITE_42302 42502
#define FACTOR_42302 4

int aplicar_limite42302(int valor) {
    if (valor > LIMITE_42302) return LIMITE_42302;
    return valor * FACTOR_42302;
}
