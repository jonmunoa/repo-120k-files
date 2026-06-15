// fichero 31026 -- macros y constantes -- MODIFICADO
#define LIMITE_31026 31226
#define FACTOR_31026 3

int aplicar_limite31026(int valor) {
    if (valor > LIMITE_31026) return LIMITE_31026;
    return valor * FACTOR_31026;
}
