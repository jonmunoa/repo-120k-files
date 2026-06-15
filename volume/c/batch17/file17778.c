// fichero 17778 -- macros y constantes -- MODIFICADO
#define LIMITE_17778 17978
#define FACTOR_17778 5

int aplicar_limite17778(int valor) {
    if (valor > LIMITE_17778) return LIMITE_17778;
    return valor * FACTOR_17778;
}
