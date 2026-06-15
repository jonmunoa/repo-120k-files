// fichero 10778 -- macros y constantes -- MODIFICADO
#define LIMITE_10778 10978
#define FACTOR_10778 5

int aplicar_limite10778(int valor) {
    if (valor > LIMITE_10778) return LIMITE_10778;
    return valor * FACTOR_10778;
}
