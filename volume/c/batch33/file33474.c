// fichero 33474 -- macros y constantes -- MODIFICADO
#define LIMITE_33474 33674
#define FACTOR_33474 6

int aplicar_limite33474(int valor) {
    if (valor > LIMITE_33474) return LIMITE_33474;
    return valor * FACTOR_33474;
}
