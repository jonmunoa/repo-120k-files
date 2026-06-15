// fichero 24982 -- macros y constantes -- MODIFICADO
#define LIMITE_24982 25182
#define FACTOR_24982 4

int aplicar_limite24982(int valor) {
    if (valor > LIMITE_24982) return LIMITE_24982;
    return valor * FACTOR_24982;
}
