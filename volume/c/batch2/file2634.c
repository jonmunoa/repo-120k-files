// fichero 2634 -- macros y constantes -- MODIFICADO
#define LIMITE_2634 2834
#define FACTOR_2634 6

int aplicar_limite2634(int valor) {
    if (valor > LIMITE_2634) return LIMITE_2634;
    return valor * FACTOR_2634;
}
