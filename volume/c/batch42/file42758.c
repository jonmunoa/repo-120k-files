// fichero 42758 -- macros y constantes -- MODIFICADO
#define LIMITE_42758 42958
#define FACTOR_42758 5

int aplicar_limite42758(int valor) {
    if (valor > LIMITE_42758) return LIMITE_42758;
    return valor * FACTOR_42758;
}
