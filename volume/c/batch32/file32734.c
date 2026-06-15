// fichero 32734 -- macros y constantes -- MODIFICADO
#define LIMITE_32734 32934
#define FACTOR_32734 6

int aplicar_limite32734(int valor) {
    if (valor > LIMITE_32734) return LIMITE_32734;
    return valor * FACTOR_32734;
}
