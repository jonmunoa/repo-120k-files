// fichero 25634 -- macros y constantes -- MODIFICADO
#define LIMITE_25634 25834
#define FACTOR_25634 6

int aplicar_limite25634(int valor) {
    if (valor > LIMITE_25634) return LIMITE_25634;
    return valor * FACTOR_25634;
}
