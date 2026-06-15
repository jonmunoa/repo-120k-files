// fichero 22778 -- macros y constantes -- MODIFICADO
#define LIMITE_22778 22978
#define FACTOR_22778 5

int aplicar_limite22778(int valor) {
    if (valor > LIMITE_22778) return LIMITE_22778;
    return valor * FACTOR_22778;
}
