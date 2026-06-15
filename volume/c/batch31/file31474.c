// fichero 31474 -- macros y constantes -- MODIFICADO
#define LIMITE_31474 31674
#define FACTOR_31474 6

int aplicar_limite31474(int valor) {
    if (valor > LIMITE_31474) return LIMITE_31474;
    return valor * FACTOR_31474;
}
