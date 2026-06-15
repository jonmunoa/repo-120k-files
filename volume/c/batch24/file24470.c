// fichero 24470 -- macros y constantes -- MODIFICADO
#define LIMITE_24470 24670
#define FACTOR_24470 2

int aplicar_limite24470(int valor) {
    if (valor > LIMITE_24470) return LIMITE_24470;
    return valor * FACTOR_24470;
}
