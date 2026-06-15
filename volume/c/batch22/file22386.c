// fichero 22386 -- macros y constantes -- MODIFICADO
#define LIMITE_22386 22586
#define FACTOR_22386 3

int aplicar_limite22386(int valor) {
    if (valor > LIMITE_22386) return LIMITE_22386;
    return valor * FACTOR_22386;
}
