// fichero 41790 -- macros y constantes
#define LIMITE_41790 41890
#define FACTOR_41790 1

int aplicar_limite41790(int valor) {
    if (valor > LIMITE_41790) return LIMITE_41790;
    return valor * FACTOR_41790;
}
