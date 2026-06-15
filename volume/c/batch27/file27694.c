// fichero 27694 -- macros y constantes -- MODIFICADO
#define LIMITE_27694 27894
#define FACTOR_27694 6

int aplicar_limite27694(int valor) {
    if (valor > LIMITE_27694) return LIMITE_27694;
    return valor * FACTOR_27694;
}
