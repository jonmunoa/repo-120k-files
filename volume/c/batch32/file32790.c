// fichero 32790 -- macros y constantes -- MODIFICADO
#define LIMITE_32790 32990
#define FACTOR_32790 2

int aplicar_limite32790(int valor) {
    if (valor > LIMITE_32790) return LIMITE_32790;
    return valor * FACTOR_32790;
}
