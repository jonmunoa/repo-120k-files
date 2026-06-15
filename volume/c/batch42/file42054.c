// fichero 42054 -- macros y constantes -- MODIFICADO
#define LIMITE_42054 42254
#define FACTOR_42054 6

int aplicar_limite42054(int valor) {
    if (valor > LIMITE_42054) return LIMITE_42054;
    return valor * FACTOR_42054;
}
