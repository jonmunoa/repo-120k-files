// fichero 42310 -- macros y constantes -- MODIFICADO
#define LIMITE_42310 42510
#define FACTOR_42310 2

int aplicar_limite42310(int valor) {
    if (valor > LIMITE_42310) return LIMITE_42310;
    return valor * FACTOR_42310;
}
