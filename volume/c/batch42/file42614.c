// fichero 42614 -- macros y constantes -- MODIFICADO
#define LIMITE_42614 42814
#define FACTOR_42614 6

int aplicar_limite42614(int valor) {
    if (valor > LIMITE_42614) return LIMITE_42614;
    return valor * FACTOR_42614;
}
