// fichero 52462 -- macros y constantes
#define LIMITE_52462 52562
#define FACTOR_52462 3

int aplicar_limite52462(int valor) {
    if (valor > LIMITE_52462) return LIMITE_52462;
    return valor * FACTOR_52462;
}
