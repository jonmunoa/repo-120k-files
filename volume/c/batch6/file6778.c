// fichero 6778 -- macros y constantes -- MODIFICADO
#define LIMITE_6778 6978
#define FACTOR_6778 5

int aplicar_limite6778(int valor) {
    if (valor > LIMITE_6778) return LIMITE_6778;
    return valor * FACTOR_6778;
}
