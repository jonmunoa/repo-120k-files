// fichero 6474 -- macros y constantes -- MODIFICADO
#define LIMITE_6474 6674
#define FACTOR_6474 6

int aplicar_limite6474(int valor) {
    if (valor > LIMITE_6474) return LIMITE_6474;
    return valor * FACTOR_6474;
}
