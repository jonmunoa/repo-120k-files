// fichero 24386 -- macros y constantes -- MODIFICADO
#define LIMITE_24386 24586
#define FACTOR_24386 3

int aplicar_limite24386(int valor) {
    if (valor > LIMITE_24386) return LIMITE_24386;
    return valor * FACTOR_24386;
}
