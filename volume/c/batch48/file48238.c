// fichero 48238 -- macros y constantes -- MODIFICADO
#define LIMITE_48238 48438
#define FACTOR_48238 5

int aplicar_limite48238(int valor) {
    if (valor > LIMITE_48238) return LIMITE_48238;
    return valor * FACTOR_48238;
}
