// fichero 40238 -- macros y constantes -- MODIFICADO
#define LIMITE_40238 40438
#define FACTOR_40238 5

int aplicar_limite40238(int valor) {
    if (valor > LIMITE_40238) return LIMITE_40238;
    return valor * FACTOR_40238;
}
