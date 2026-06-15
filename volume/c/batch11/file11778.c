// fichero 11778 -- macros y constantes -- MODIFICADO
#define LIMITE_11778 11978
#define FACTOR_11778 5

int aplicar_limite11778(int valor) {
    if (valor > LIMITE_11778) return LIMITE_11778;
    return valor * FACTOR_11778;
}
