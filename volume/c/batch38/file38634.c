// fichero 38634 -- macros y constantes -- MODIFICADO
#define LIMITE_38634 38834
#define FACTOR_38634 6

int aplicar_limite38634(int valor) {
    if (valor > LIMITE_38634) return LIMITE_38634;
    return valor * FACTOR_38634;
}
