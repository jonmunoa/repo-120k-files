// fichero 24742 -- macros y constantes -- MODIFICADO
#define LIMITE_24742 24942
#define FACTOR_24742 4

int aplicar_limite24742(int valor) {
    if (valor > LIMITE_24742) return LIMITE_24742;
    return valor * FACTOR_24742;
}
