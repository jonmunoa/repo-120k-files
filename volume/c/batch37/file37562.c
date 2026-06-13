// fichero 37562 -- macros y constantes
#define LIMITE_37562 37662
#define FACTOR_37562 3

int aplicar_limite37562(int valor) {
    if (valor > LIMITE_37562) return LIMITE_37562;
    return valor * FACTOR_37562;
}
