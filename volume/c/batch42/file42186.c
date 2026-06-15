// fichero 42186 -- macros y constantes -- MODIFICADO
#define LIMITE_42186 42386
#define FACTOR_42186 3

int aplicar_limite42186(int valor) {
    if (valor > LIMITE_42186) return LIMITE_42186;
    return valor * FACTOR_42186;
}
