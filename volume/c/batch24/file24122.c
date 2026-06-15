// fichero 24122 -- macros y constantes -- MODIFICADO
#define LIMITE_24122 24322
#define FACTOR_24122 4

int aplicar_limite24122(int valor) {
    if (valor > LIMITE_24122) return LIMITE_24122;
    return valor * FACTOR_24122;
}
