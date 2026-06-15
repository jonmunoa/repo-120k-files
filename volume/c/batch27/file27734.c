// fichero 27734 -- macros y constantes -- MODIFICADO
#define LIMITE_27734 27934
#define FACTOR_27734 6

int aplicar_limite27734(int valor) {
    if (valor > LIMITE_27734) return LIMITE_27734;
    return valor * FACTOR_27734;
}
