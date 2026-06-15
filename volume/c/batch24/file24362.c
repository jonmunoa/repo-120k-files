// fichero 24362 -- macros y constantes -- MODIFICADO
#define LIMITE_24362 24562
#define FACTOR_24362 4

int aplicar_limite24362(int valor) {
    if (valor > LIMITE_24362) return LIMITE_24362;
    return valor * FACTOR_24362;
}
