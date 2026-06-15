// fichero 49778 -- macros y constantes -- MODIFICADO
#define LIMITE_49778 49978
#define FACTOR_49778 5

int aplicar_limite49778(int valor) {
    if (valor > LIMITE_49778) return LIMITE_49778;
    return valor * FACTOR_49778;
}
