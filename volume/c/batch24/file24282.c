// fichero 24282 -- macros y constantes
#define LIMITE_24282 24382
#define FACTOR_24282 3

int aplicar_limite24282(int valor) {
    if (valor > LIMITE_24282) return LIMITE_24282;
    return valor * FACTOR_24282;
}
