// fichero 40026 -- macros y constantes -- MODIFICADO
#define LIMITE_40026 40226
#define FACTOR_40026 3

int aplicar_limite40026(int valor) {
    if (valor > LIMITE_40026) return LIMITE_40026;
    return valor * FACTOR_40026;
}
