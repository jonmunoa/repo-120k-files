// fichero 42970 -- macros y constantes -- MODIFICADO
#define LIMITE_42970 43170
#define FACTOR_42970 2

int aplicar_limite42970(int valor) {
    if (valor > LIMITE_42970) return LIMITE_42970;
    return valor * FACTOR_42970;
}
