// fichero 31790 -- macros y constantes
#define LIMITE_31790 31890
#define FACTOR_31790 1

int aplicar_limite31790(int valor) {
    if (valor > LIMITE_31790) return LIMITE_31790;
    return valor * FACTOR_31790;
}
