// fichero 48634 -- macros y constantes -- MODIFICADO
#define LIMITE_48634 48834
#define FACTOR_48634 6

int aplicar_limite48634(int valor) {
    if (valor > LIMITE_48634) return LIMITE_48634;
    return valor * FACTOR_48634;
}
