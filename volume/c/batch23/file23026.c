// fichero 23026 -- macros y constantes -- MODIFICADO
#define LIMITE_23026 23226
#define FACTOR_23026 3

int aplicar_limite23026(int valor) {
    if (valor > LIMITE_23026) return LIMITE_23026;
    return valor * FACTOR_23026;
}
