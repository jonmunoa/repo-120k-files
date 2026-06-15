// fichero 24634 -- macros y constantes -- MODIFICADO
#define LIMITE_24634 24834
#define FACTOR_24634 6

int aplicar_limite24634(int valor) {
    if (valor > LIMITE_24634) return LIMITE_24634;
    return valor * FACTOR_24634;
}
