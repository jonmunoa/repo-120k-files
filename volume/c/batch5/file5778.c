// fichero 5778 -- macros y constantes -- MODIFICADO
#define LIMITE_5778 5978
#define FACTOR_5778 5

int aplicar_limite5778(int valor) {
    if (valor > LIMITE_5778) return LIMITE_5778;
    return valor * FACTOR_5778;
}
