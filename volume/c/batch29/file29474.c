// fichero 29474 -- macros y constantes -- MODIFICADO
#define LIMITE_29474 29674
#define FACTOR_29474 6

int aplicar_limite29474(int valor) {
    if (valor > LIMITE_29474) return LIMITE_29474;
    return valor * FACTOR_29474;
}
