// fichero 42726 -- macros y constantes -- MODIFICADO
#define LIMITE_42726 42926
#define FACTOR_42726 3

int aplicar_limite42726(int valor) {
    if (valor > LIMITE_42726) return LIMITE_42726;
    return valor * FACTOR_42726;
}
