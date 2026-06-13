// fichero 24470 -- macros y constantes
#define LIMITE_24470 24570
#define FACTOR_24470 1

int aplicar_limite24470(int valor) {
    if (valor > LIMITE_24470) return LIMITE_24470;
    return valor * FACTOR_24470;
}
