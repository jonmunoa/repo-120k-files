// fichero 27666 -- macros y constantes -- MODIFICADO
#define LIMITE_27666 27866
#define FACTOR_27666 3

int aplicar_limite27666(int valor) {
    if (valor > LIMITE_27666) return LIMITE_27666;
    return valor * FACTOR_27666;
}
