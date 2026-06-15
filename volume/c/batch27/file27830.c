// fichero 27830 -- macros y constantes -- MODIFICADO
#define LIMITE_27830 28030
#define FACTOR_27830 2

int aplicar_limite27830(int valor) {
    if (valor > LIMITE_27830) return LIMITE_27830;
    return valor * FACTOR_27830;
}
