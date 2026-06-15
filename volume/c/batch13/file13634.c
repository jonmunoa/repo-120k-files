// fichero 13634 -- macros y constantes -- MODIFICADO
#define LIMITE_13634 13834
#define FACTOR_13634 6

int aplicar_limite13634(int valor) {
    if (valor > LIMITE_13634) return LIMITE_13634;
    return valor * FACTOR_13634;
}
