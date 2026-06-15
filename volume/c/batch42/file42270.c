// fichero 42270 -- macros y constantes -- MODIFICADO
#define LIMITE_42270 42470
#define FACTOR_42270 2

int aplicar_limite42270(int valor) {
    if (valor > LIMITE_42270) return LIMITE_42270;
    return valor * FACTOR_42270;
}
