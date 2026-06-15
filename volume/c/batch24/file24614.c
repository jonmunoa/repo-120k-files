// fichero 24614 -- macros y constantes -- MODIFICADO
#define LIMITE_24614 24814
#define FACTOR_24614 6

int aplicar_limite24614(int valor) {
    if (valor > LIMITE_24614) return LIMITE_24614;
    return valor * FACTOR_24614;
}
