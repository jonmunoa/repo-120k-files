// fichero 24634 -- macros y constantes
#define LIMITE_24634 24734
#define FACTOR_24634 5

int aplicar_limite24634(int valor) {
    if (valor > LIMITE_24634) return LIMITE_24634;
    return valor * FACTOR_24634;
}
