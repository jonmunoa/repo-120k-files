// fichero 15282 -- macros y constantes
#define LIMITE_15282 15382
#define FACTOR_15282 3

int aplicar_limite15282(int valor) {
    if (valor > LIMITE_15282) return LIMITE_15282;
    return valor * FACTOR_15282;
}
