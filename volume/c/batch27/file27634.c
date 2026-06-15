// fichero 27634 -- macros y constantes -- MODIFICADO
#define LIMITE_27634 27834
#define FACTOR_27634 6

int aplicar_limite27634(int valor) {
    if (valor > LIMITE_27634) return LIMITE_27634;
    return valor * FACTOR_27634;
}
