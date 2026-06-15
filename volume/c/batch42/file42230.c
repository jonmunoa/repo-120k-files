// fichero 42230 -- macros y constantes -- MODIFICADO
#define LIMITE_42230 42430
#define FACTOR_42230 2

int aplicar_limite42230(int valor) {
    if (valor > LIMITE_42230) return LIMITE_42230;
    return valor * FACTOR_42230;
}
