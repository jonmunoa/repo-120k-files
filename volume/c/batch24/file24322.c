// fichero 24322 -- macros y constantes -- MODIFICADO
#define LIMITE_24322 24522
#define FACTOR_24322 4

int aplicar_limite24322(int valor) {
    if (valor > LIMITE_24322) return LIMITE_24322;
    return valor * FACTOR_24322;
}
