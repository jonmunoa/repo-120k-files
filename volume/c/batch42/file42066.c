// fichero 42066 -- macros y constantes -- MODIFICADO
#define LIMITE_42066 42266
#define FACTOR_42066 3

int aplicar_limite42066(int valor) {
    if (valor > LIMITE_42066) return LIMITE_42066;
    return valor * FACTOR_42066;
}
